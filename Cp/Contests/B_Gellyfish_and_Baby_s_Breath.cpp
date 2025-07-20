/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353

ll mod_pow(ll exp) {
    ll base = 2;
    ll result = 1;
    
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    
    return result;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> p(n); 
    vector<ll> q(n); 
    for(auto& i: p){
        cin >> i;
    }
    for(auto& i: q){
        cin >> i;
    }

    vector<ll> r(n);
    ll maxp = -1, maxq = -1;
    ll maxpi = -1, maxqi = -1;

    for(int i=0;i<n;i++){
        if(p[i]>maxp){
            maxp = p[i];
            maxpi = i;
        }
        if(q[i]>maxq){
            maxq = q[i];
            maxqi = i;
        }
        if(maxp>maxq){
            ll temp = (mod_pow(maxp) + mod_pow(q[i-maxpi]))%mod;
            r[i] = temp;
        }
        else if(maxp<maxq){
            ll temp = (mod_pow(maxq) + mod_pow(p[i-maxqi]))%mod;
            r[i] = temp;
        }
        else{
            if(p[i-maxqi] >= q[i-maxpi]){
                ll temp = (mod_pow(maxq) + mod_pow(p[i-maxqi]))%mod;
                r[i] = temp;
            }
            else{
                ll temp = (mod_pow(maxp) + mod_pow(q[i-maxpi]))%mod;
                r[i] = temp;
            }
        }
    }
    for(auto& i: r){
        cout << i << " ";
    }
    cout << endl;
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