/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    ll f=0;
    ll b, e;
    for(ll i=0;i<n;i++){
        if(l[i]==1 && !f){
            f=1;
            b=i;
        }
        if(l[i]==1){
            e=i;
        }
    }
    if((e-b+1)<=x){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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