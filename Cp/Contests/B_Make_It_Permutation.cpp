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
    cout << 2*(n-1) << "\n";
    for(ll i=2;i<=n;i++){
        if(i!=n){
            cout << i << " 1 " << n-i+1 << "\n";
            cout  << i << " 1 " << n << "\n";
        }
        else{
            cout  << i << " 2 " << n << "\n";
            cout  << i << " 1 " << n << "\n";
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