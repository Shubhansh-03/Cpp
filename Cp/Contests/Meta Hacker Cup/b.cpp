#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define mod 1000000007

// bool check(vector<int>& b, int m, int g, const vector<int>& pref) {
//     if (g == 0) {
//         return true;
//     }

//     int num = g;
//     for (int j = 0; j < m; ++j) {
//         if (pref[num] > b[j]) {
//             return false;
//         }
        
//         if (j < m - 1) {
//             int curr = num;
//             while (curr > 0 && pref[curr] > b[j + 1]) {
//                 curr--;
//             }
//             num = curr;
//         }
//     }
    
//     return true;
// }

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     vector<int> b(m);

//     for (auto &i : a) cin >> i;
//     for (auto &i : b) cin >> i;

//     sort(a.begin(), a.end(), greater<int>());
//     sort(b.begin(), b.end(), greater<int>());

//     vector<int> grp;
//     int ranks = 1, count = 1;
//     for(int i=1; i<n;i++){
//         if(a[i]!=a[i-1]){
//             ranks++;
//             grp.push_back(count);
//             count = 1;
//         }
//         else{
//             count++;
//         }
//     }
//     grp.push_back(count);
//     // for(auto i: grp) cout << i << " ";
//     // cout << endl;

//     int g = grp.size();
//     vector<long long> pref(g + 1, 0);
//     for (int i = 0; i < g; ++i) {
//         pref[i + 1] = pref[i] + grp[i];
//     }

//     int low = 0, high = g;
//     int ans = 0;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (check(b, m, mid, pref)) {
//             ans = pref[mid];
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     cout << ans << "\n";
// }

bool check(int L, const vector<ll>& P, const vector<ll>& B) {
    if (L == 0) {
        return true;
    }
    // L groups require L item types.
    if (L > B.size()) {
        return false;
    }

    // Check the condition for each item type from 1 to L
    // B[0] (j=1) must support P[L-1] (all L groups)
    // B[1] (j=2) must support P[L-2] (top L-1 groups)
    // ...
    // B[L-1] (j=L) must support P[0] (top 1 group)
    for (int j = 1; j <= L; ++j) {
        ll need = P[L - j];
        ll have = B[j - 1];
        if (need > have) {
            return false;
        }
    }
    return true;
}

/**
 * @brief Solves a single test case.
 */
void solve() {
    int N, M;
    cin >> N >> M;

    // Use a map to count scores, automatically sorting them
    map<int, ll, greater<int>> scoreCounts;
    for (int i = 0; i < N; ++i) {
        int score;
        cin >> score;
        scoreCounts[score]++;
    }

    // Create the vector C (counts per group, sorted by score)
    vector<ll> C;
    for (auto const& [score, count] : scoreCounts) {
        C.push_back(count);
    }

    // If no competitors, answer is 0
    if (C.empty()) {
        cout << 0 << "\n";
        return;
    }

    // Create prefix sum P
    int numGroups = C.size();
    vector<ll> P(numGroups);
    P[0] = C[0];
    for (int i = 1; i < numGroups; ++i) {
        P[i] = P[i - 1] + C[i];
    }

    // Read and sort merchandise B (descending)
    vector<ll> B(M);
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    sort(B.rbegin(), B.rend());

    // Binary search for the largest L (number of groups) that works
    int K = min(numGroups, M);
    int L_ans = 0;
    int low = 0;
    int high = K;

    while (low <= high) {
        int mid_L = low + (high - low) / 2;
        if (check(mid_L, P, B)) {
            // This L works, try for a larger one
            L_ans = mid_L;
            low = mid_L + 1;
        } else {
            // This L fails, try a smaller one
            high = mid_L - 1;
        }
    }

    // The answer is the total number of people in the L_ans groups
    if (L_ans == 0) {
        cout << 0 << "\n";
    } else {
        cout << P[L_ans - 1] << "\n";
    }
}

void main_() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test = 1;
    cin >> test;
    for(int t=1;t<=test;t++){
        cout << "Case #" << t << ": ";
        solve();
    }
}

static void run_main() {
    main_();
    exit(0);
}

int32_t main() {
    size_t stsize = 1024 * 1024 * 1024; // 1 GiB stack
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %0, %%rsp\n"
        "call *%1\n"
        :
        : "r"(send), "r"(run_main));
    return 0;
}
