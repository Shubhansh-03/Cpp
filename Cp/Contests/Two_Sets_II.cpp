#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    int sum = (n*(n+1))/2;
    if(sum&1){
        cout << 0;
        return;
    }
    sum >>= 1;
    vector<int> dp(sum+1, 0);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=sum;j>=0;j--){
            if(j-i >= 0){
                dp[j] = (dp[j] + dp[j-i]) % mod;
            }
        }
    }
    int inv = 500000004;
    cout << ((dp[sum]*inv)%mod);
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
