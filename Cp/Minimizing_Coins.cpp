/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> l(n);
    for(auto& i: l){
        cin >> i;
    }

    vector<int> dp(t+1, 1e9);
    dp[t] = 0;
    for(int tar = t-1;tar>=0;tar--){
        int best = 1e9;
        for(int i=0;i<n;i++){
            if(tar+l[i] <= t){
                // cout << "Hehe";
                best = min(best, (1+dp[tar+l[i]]));
            }
        }
        dp[tar] = best;
        // for(auto i: dp){
        //     cout << i << " ";
        // }
        // cout << endl;
        // cout << dp[tar];
    }
    if(dp[0] >= 1e9) cout << -1 << endl;
    else
    cout << dp[0] << endl;
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