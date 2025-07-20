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
    vector<ll> l(n-1);
    for(auto& i: l){
        cin >> i;
    }
    map<ll, ll> map;
    ll sum = 0;
    int f = 0;
    for(ll i=n-1;i>0;i--){
        ll num = l[i]-l[i-1];
        map[num]++;
        if(map[num]>1 || num>n){
            if(f==0){
                f=1;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
        sum += num;
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