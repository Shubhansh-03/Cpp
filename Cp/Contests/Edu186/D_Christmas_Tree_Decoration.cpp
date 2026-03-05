#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353

void solve() {
    int n;
    cin >> n;
    vector<int> l(n + 1);
    for(auto& i: l) cin >> i;
    int sum = accumulate(l.begin(), l.end(), 0ll);
    // long long R = S / n;
    // int K = S % n;

    // dp[j][s] = ways to pick j people to be in the first K spots with total cost s
    // Max possible cost we care about is a[0]
    // But cost can be up to S. However, if a[0] > S, the condition is always true.
    int max_s = min((long long)a[0], S);
    vector<vector<long long>> dp(K + 1, vector<long long>(max_s + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        long long c1 = max(0LL, R + 1 - a[i]);
        long long c0 = max(0LL, R - a[i]);
        vector<vector<long long>> next_dp(K + 1, vector<long long>(max_s + 1, 0));
        
        for (int j = 0; j <= K; ++j) {
            for (int s = 0; s <= max_s; ++s) {
                if (dp[j][s] == 0) continue;
                // Option 1: Person i is in the first K (if j < K)
                if (j < K && s + c1 <= max_s) {
                    next_dp[j + 1][s + c1] = (next_dp[j + 1][s + c1] + dp[j][s]) % MOD;
                }
                // Option 2: Person i is in the remaining n-K
                if (s + c0 <= max_s) {
                    next_dp[j][s + c0] = (next_dp[j][s + c0] + dp[j][s]) % MOD;
                }
            }
        }
        dp = next_dp;
    }

    long long valid_ways = 0;
    for (int s = 0; s <= max_s; ++s) {
        valid_ways = (valid_ways + dp[K][s]) % MOD;
    }

    // Multiply by K! and (n-K)!
    for (int i = 1; i <= K; ++i) valid_ways = (valid_ways * i) % MOD;
    for (int i = 1; i <= n - K; ++i) valid_ways = (valid_ways * i) % MOD;

    cout << valid_ways << endl;
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
