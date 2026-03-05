#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;
    
    vector<int> dp(c+1, 0);
    for(int i=0;i<n;i++){
        for(int j=c;j>=0;j--){
            if(j-a[i] >= 0){
                dp[j] = max(dp[j], dp[j-a[i]] + b[i]);
            }
        }
    }
    cout << dp[c];
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
