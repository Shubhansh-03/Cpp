#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m + 2);
    string s;
    for (auto &i : a)
        cin >> i;
    for (int i = 1; i <= m; i++)
        cin >> b[i];

    cin >> s;

    b[0] = 2e9, b[m + 1] = -2e9;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int begin = 0;
    vector<int> left, right;
    for (int i = 0; i < n; i++) {
        while (b[begin] < a[i]) {
            begin++;
        }
        left.push_back(a[i] - b[begin - 1]);
        right.push_back(b[begin] - a[i]);
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    // for (auto i : left)
    //     cout << i << " ";
    // cout << endl;
    // for (auto i : right)
    //     cout << i << " ";
    // cout << endl;
    int ans = n;
    int dis = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'L') {
            dis--;
        } else {
            dis++;
        }
        if (dis < 0) {
            auto it1 = upper_bound(left.begin(), left.end(), -1 * dis);
            if (it1 != left.begin()) {
                it1--;
                int ind = it1 - left.begin();
                // cout << "1: " << ind << " ";
                ans = min(ans, n - ind  - 1);

            }
        } else {
            auto it2 = upper_bound(right.begin(), right.end(), dis);

            if (it2 != right.begin()) {
                --it2;
                // cout << "hehe";
                int ind = it2 - right.begin();
                // cout << "2: " << ind << " ";
                ans = min(ans, n - ind -1);
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}
int32_t main() {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
