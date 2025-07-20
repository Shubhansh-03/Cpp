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
    sort(l.begin(), l.end());

    ll s = l[0], e = l[n-1];
    if((s+e)%2==0){
        cout << "0\n";
        return;
    }
    ll esi = 0, eei = n-1;
    for(int i=0;i<n;i++){
        if(l[i]%2==0){
            esi = i;
            break;
        }
    } 
    for(int i=n-1;i>=0;i--){
        if(l[i]%2==0){
            eei = i;
            break;
        }
    }
    ll osi = 0, oei = n-1;
    for(int i=0;i<n;i++){
        if(l[i]%2==1){
            osi = i;
            break;
        }
    } 
    for(int i=n-1;i>=0;i--){
        if(l[i]%2==1){
            oei = i;
            break;
        }
    }
    cout << min((esi+(n-1-eei)), (osi+(n-1-oei))) << endl;
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