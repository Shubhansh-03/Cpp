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
    ll diff = l[1]-l[0];
    for(ll i=1;i<n;i++){
        if((l[i]-l[i-1])==diff){
            continue;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    ll sub = (diff>=0)?1:(n);
    ll num = l[0]-abs(diff)*sub;
    // cout << num;
    if(num>=0 && num%(n+1)==0){
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