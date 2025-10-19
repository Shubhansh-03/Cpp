/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int t;
    cin >> t;
    vector<int> dp(t+1, 0);
    dp[t] = 1;
    for(int i=t-1;i>=0;i--){
        for(int num=1;num<=6;num++){
            if(i+num <= t){
                dp[i] = (dp[i]+dp[i+num]) % mod;
            }
        }
    }
    cout << dp[0];
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}