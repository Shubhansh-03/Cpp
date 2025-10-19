/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int recur(int ind, int prev, vector<vector<int>>& dp){
    int k = dp.size();
    int n = dp[0].size()-1;
    if(ind == k){
        return 1;
    }

    if(dp[ind][prev] != -1){
        return dp[ind][prev];
    }

    int ans = 0;
    for(int i=1;prev*i<=n;i++){
        ans = (ans + recur(ind+1, prev*i, dp)) % mod;
    }

    return dp[ind][prev] = ans;

}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(k, vector<int> (n+1, -1));
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans += recur(0, i, dp);
    }
    // for(auto i: dp){
    //     for(auto j: i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[0][1] << endl;
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