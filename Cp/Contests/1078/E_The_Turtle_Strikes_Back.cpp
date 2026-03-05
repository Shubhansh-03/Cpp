#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
const long long INF = 1e18;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n * m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i * m + j];
        }
    }

    // d[k] stores max path sum from (0,0) to cell k
    vector<long long> d(n * m, -INF);
    // u[k] stores max path sum from cell k to (n-1, m-1)
    vector<long long> u(n * m, -INF);

    // 1. Compute Prefix DP (D)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int idx = i * m + j;
            long long prev = -INF;
            if (i > 0) prev = max(prev, d[(i - 1) * m + j]);
            if (j > 0) prev = max(prev, d[i * m + (j - 1)]);
            
            // Base case: start cell
            if (i == 0 && j == 0) prev = 0;
            
            d[idx] = a[idx] + prev;
        }
    }

    // 2. Compute Suffix DP (U)
    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            int idx = i * m + j;
            long long next_val = -INF;
            if (i < n - 1) next_val = max(next_val, u[(i + 1) * m + j]);
            if (j < m - 1) next_val = max(next_val, u[i * m + (j + 1)]);
            
            // Base case: end cell
            if (i == n - 1 && j == m - 1) next_val = 0;
            
            u[idx] = a[idx] + next_val;
        }
    }

    // 3. Process diagonals to find max path sums excluding specific cells
    // Diagonals range from 0 to n+m-2. Size n+m is safe.
    int num_diagonals = n + m; 
    vector<long long> max1(num_diagonals, -INF); // Largest path sum on diagonal
    vector<long long> max2(num_diagonals, -INF); // Second largest path sum on diagonal
    vector<int> count1(num_diagonals, 0);        // How many cells have value max1

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int idx = i * m + j;
            int diag = i + j;
            
            // The max path sum passing through (i,j)
            long long path_sum = d[idx] + u[idx] - a[idx];

            if (path_sum > max1[diag]) {
                max2[diag] = max1[diag];
                max1[diag] = path_sum;
                count1[diag] = 1;
            } else if (path_sum == max1[diag]) {
                count1[diag]++;
            } else if (path_sum > max2[diag]) {
                max2[diag] = path_sum;
            }
        }
    }

    long long min_max_pleasure = INF;

    // 4. Calculate best outcome for Raphael
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int idx = i * m + j;
            int diag = i + j;
            long long original_path_val = d[idx] + u[idx] - a[idx];
            
            // Calculate best path avoiding (i,j)
            long long best_avoiding;
            if (original_path_val == max1[diag] && count1[diag] == 1) {
                // If this cell is the unique bottleneck for the max path, 
                // avoiding it forces Michelangelo to take the second best route.
                best_avoiding = max2[diag];
            } else {
                // Otherwise, Michelangelo can still achieve max1 via another cell.
                best_avoiding = max1[diag];
            }

            // Calculate path through (i,j) if flipped
            // New Value = Old Sum - a + (-a) = Old Sum - 2a
            long long through_flipped = original_path_val - 2 * a[idx];
            
            // Michelangelo takes the max of these two options
            long long michelangelo_outcome = max(best_avoiding, through_flipped);

            // Raphael wants to minimize this result
            min_max_pleasure = min(min_max_pleasure, michelangelo_outcome);
        }
    }

    cout << min_max_pleasure << "\n";
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
