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
    int f1=0;
    int f2=0;
    for(ll i=0;i<n;i++){
        if(l[i]==0 && !f1){
            f2 = 1;
            f1 = 1;
        }
        else if(l[i]==0 && f1){
            cout << "YES" << endl;
            return;
        }
        else{
            f1=0;
        }
    }
    if(f2){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
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