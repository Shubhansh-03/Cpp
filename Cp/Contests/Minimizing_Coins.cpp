#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    vector<int> dp(t+1, mod);
    dp[0] = 0;
    for(int i=1;i<=t;i++){
        for(int j=0;j<n;j++){
            if(i-a[j] >= 0){
                dp[i] = min(dp[i], dp[i-a[j]]+1);
            }
        }
    }
    // for(auto i: dp) cout << i << " ";
    cout << ((dp[t] >= mod) ? (-1) : dp[t]);
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
