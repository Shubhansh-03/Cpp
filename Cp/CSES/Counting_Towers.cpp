/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve(vector<vector<int>>& dp)
{
    int n;
    cin >> n;
    cout << (dp[n-1][0]+dp[n-1][1])%mod << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    int n = 1000001;
    vector<vector<int>> dp(n, vector<int> (2, 0));
    dp[0][0] = 1;
    dp[0][1] = 1;
    for(int i=1;i<n;i++){
        dp[i][1] = (2*dp[i-1][1] + dp[i-1][0])%mod;
        dp[i][0] = ((4*dp[i-1][0])%mod + dp[i-1][1])%mod;
    }
    while(test--)
    {
        solve(dp);
    }
    return 0;
}