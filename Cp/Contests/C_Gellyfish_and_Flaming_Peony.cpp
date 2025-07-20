/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    ll g = l[0];
    int mine = l[0], mincnt = 1;
    for(int i=1;i<n;i++){
        g = __gcd(g, l[i]);
        if(l[i]<mine){
            mine = l[i];
            mincnt = 1;
        }
        else if(l[i]==mine){
            mincnt++;
        }
    }
    if(g==mine){
        cout << n - mincnt << endl;
        return;
    }

    for(auto& i: l){
        i = i/g;
    }
// DP SECTION
    map<ll, ll> gcd_map;

    for (ll i = 0; i < n; i++) {
        map<ll, ll> new_map;
        new_map[l[i]] = 1;

        for (auto it: gcd_map) {
            ll g1 = it.first;
            ll cnt = it.second;
            ll new_gcd = __gcd(g1, l[i]);
            if (new_map[new_gcd])
                new_map[new_gcd] = min(new_map[new_gcd], cnt + 1);
            else
                new_map[new_gcd] = cnt + 1;
        }

        for (auto it : new_map) {
            ll g1 = it.first;
            ll cnt = it.second;
            if (gcd_map[g1])
                gcd_map[g1] = min(gcd_map[g1], cnt);
            else
                gcd_map[g1] = cnt;
        }
    }
    ll ans = 0;
    if (gcd_map.count(1)){
        ans = gcd_map[1]-1;
    }
    else{
        ans = n-1;
    }
    ans += n-1;
    cout << ans << endl;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}