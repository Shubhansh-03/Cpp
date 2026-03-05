#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, tar;
    cin >> n >> tar;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    vector<int> dp(tar+1, 0);
    dp[0] = 1;
    for(int j=0;j<n;j++){
        for(int i=1;i<=tar;i++){
            if(i-a[j] >= 0){
                dp[i] = (dp[i] + dp[i-a[j]])%mod;
            }
        }
    }
    cout << dp[tar];
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
