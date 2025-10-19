/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(auto& i: coins){
        cin >> i;
    }
    vector<int> dp(x+1, 0);

    dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int weight = 0; weight <= x; weight++) {
			if (weight - coins[i - 1] >= 0) {  // prevent out of bounds cases
				dp[weight] += dp[weight - coins[i - 1]];
				dp[weight] %= mod;
			}
		}
	}
	cout << dp[x] << '\n';
    
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}