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
    vector<pair<ll, ll>> l(n);
    ll count = 1;
    for(auto& i: l){
        cin >> i.first;
        i.second = count++;
    }
    sort(l.begin(), l.end());
    ll ans = 0;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(l[i].first*l[j].first>=2*n){
                break;
            }
            if(l[i].first*l[j].first == l[i].second + l[j].second){
                ans ++;
            }
        }
    }
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