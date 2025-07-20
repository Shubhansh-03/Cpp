/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> l(m);
    for(auto& i: l){
        cin >> i;
    }
    sort(l.begin(), l.end());
    for(int i=0;i<n;i++){
        ll k = i/2;
        if(i%2==0){
            for(int j=0;j<3;j++){
                cout << l[m-1-k] << " " << l[k] << " ";
            }
            cout << "\n";
        }
        else{
            for(int j=0;j<3;j++){
                cout <<  l[k] << " " << l[m-1-k] << " " ;
            }
            cout << "\n";
        }
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