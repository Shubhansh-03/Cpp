/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    vector<vector<ll>> qu(q, vector<ll> (3));
    for(auto& i: qu){
        cin >> i[0] >> i[1] >> i[2];
    }
    vector<ll> ans(n);
    for(int i=q-1;i>=0;i--){

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