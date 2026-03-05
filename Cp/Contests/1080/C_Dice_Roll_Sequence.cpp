#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    int prev = a[0];
    int ans = 0;
    unordered_map<int, int> mp;
    mp[1] = 6;
    mp[6] = 1;
    mp[5] = 2;
    mp[2] = 5;
    mp[3] = 4;
    mp[4] = 3;
    for(int i=1;i<n;i++){
        if(mp[prev] == a[i] || prev == a[i]){
            ans++;
            prev = -1;
        }
        else{
            prev = a[i];
        }
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
