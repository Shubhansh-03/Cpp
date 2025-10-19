/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> l(n, vector<char>(n));
    for(auto &i: l){
        for(auto &j: i){
            cin >> j;
        }
    }

    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    dp[n-1][n-1] = 1;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(l[i][j] == '*'){
                dp[i][j] = 0;
                continue;
            }
            if(i == n-1 && j == n-1){
                continue;
            }
            dp[i][j] = (dp[i+1][j] + dp[i][j+1])%mod;
        }
    }
    cout << dp[0][0];

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