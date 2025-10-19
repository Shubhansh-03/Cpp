/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

#define mod 1000000007
int modPow(int base, int exp) {
  int res = 1;
  while (exp > 0) {
      if (exp & 1ll) res = (res * base) % mod;
      base = (base * base) % mod;
      exp >>= 1ll;
  }
  return res;
}

int modinv(int n){
    int ans = (int)(modPow(n, mod-2));
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    int sum = (n*(n+1))/2;

    if(sum%2){
        cout << 0;
        return;
    }
    int tar = sum>>1;
    vector<int> dp(tar+1, 0);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=tar;j>0;j--){
            if(j-i>=0){
                dp[j] = (dp[j] + dp[j-i]) % mod;
            }
        }
    }
    cout << ((dp[tar])*modinv(2))%mod;

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