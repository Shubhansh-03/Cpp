#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    int x = n;
    unordered_map<int, int> mp;
    for(int i=2;i*i<=x;i++){
        while(n%i == 0){
            // cout << i << " ";
            mp[i] = 1;
            n/=i;
        }
    }
    if(n != 1){
        mp[n] = 1;
    }
    n = x;
    int ans = 1;
    for(auto i: mp){
        if(i.second > 0)
            ans *= i.first;
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
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
