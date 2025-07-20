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
    vector<ll> a(n), b(n);
    for(auto& i: a){
        cin >> i;
    }
    for(auto& i: b){
        cin >> i;
    }
    map<ll, ll> mapa, mapb;

    ll ind=-1;
    if(a[n-1] == b[n-1]){
        cout << n << endl;
        return;
    }
    for(ll i=n-2;i>=0;i--){
        mapa[b[i+1]]++;
        if(mapa.find(b[i])!=mapa.end() || a[i]==b[i]){
            ind = i;
            break;
        }
        mapa[a[i+1]]++;
    }

    for(ll i=n-2;i>=0;i--){
        mapb[a[i+1]]++;
        if(mapb.find(a[i])!=mapb.end()){
            ind = max(ind, i); 
            break;
        }
        mapb[b[i+1]]++;
    }
    cout << ind+1 << endl;
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