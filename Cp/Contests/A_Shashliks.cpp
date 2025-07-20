/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    ll ans = 0;
    if(x<y){
        if(k>=a){
        ll temp = (k-a)/x+1;
        k -= temp*x;
        ans += temp;}
        if(k>=b){
        ll temp = (k-b)/y+1;
        k -= temp*y;
        ans += temp;}
    }
    else{
        if(k>=b){
        ll temp = (k-b)/y+1;
        k -= temp*y;
        ans += temp;}
        if(k>=a){
        ll temp = (k-a)/x+1;
        k -= temp*x;
        ans += temp;}
    }
    cout << ans << endl;
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