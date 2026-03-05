#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

const int INF = 1e9+7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    vector<vector<int>> dp(2, vector<int> (n+1, INF));
    dp[0][0] = 0;
    for(int i=0;i<n;i++){
        dp[0][i+1] = min(dp[0][i+1], dp[1][i]);
        dp[1][i+1] = min(dp[1][i+1], dp[0][i]+a[i]);
        if(i+2 <= n){
            dp[0][i+2] = min(dp[0][i+2], dp[1][i]);
            dp[1][i+2] = min(dp[1][i+2], dp[0][i]+a[i]+a[i+1]);
        }
    }
    cout << min(dp[0][n], dp[1][n]) << endl;
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
