#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int sq = sqrt(n);
    vector<int> prime(sq+1, 1);
    int temp = n;
    map<int, int> mp;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=2;i*j<=sq;j++){
                prime[i*j] = 0;
            }
            while(temp%i == 0){
                mp[i]++;
                temp /= i;
            }
        }
    }
    int ans = 0;
    if(temp != 1){
        ans++;
    }
    for(auto i: mp){
        ans += ((sqrt(1+8*i.second)-1)/2);
    }
    cout << ans << endl;
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
