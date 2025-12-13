#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    vector<vector<int>> dp(n, vector<int> (k+1, 0));
    for(int i=0;i<=k;i++) dp[0][i] = min(i, l[0]);

    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            int t = ((j>=k)?(dp[i][j]))
            dp[i][j] = max(dp[i-1][j], t);
        }
    }
    for(auto i: dp){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
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
