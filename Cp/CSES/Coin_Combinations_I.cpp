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
    sort(l.begin(), l.end());
    vector<int> dp(t+1, 0);
    dp[t] = 1;
    for(int tar=t-1;tar>=0;tar--){
        for(int i=0;i<n;i++){
            if(tar+l[i] <= t){
                dp[tar] += dp[tar+l[i]];
                dp[tar] %= mod;
            }
            else{
                break;
            }
        }
    }
    // for(auto i: dp) cout << i << " ";
    cout << dp[0];
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