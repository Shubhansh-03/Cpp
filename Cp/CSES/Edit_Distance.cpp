/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 1e9));
    for(int i=0;i<=m;i++){
        dp[0][i] = i;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int take = dp[i-1][j-1] + 1;
            if(a[i-1] == b[j-1]){
                take = dp[i-1][j-1];
            }
            dp[i][j] = min({take, dp[i-1][j]+1, dp[i][j-1]+1});
        }
    }
    // for(auto i: dp){
    //     for(auto j: i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][m] << endl;
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