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
    vector<ll> ans(n);
    ll b=0, e=n-1;
    ll num = 1;
    while( b<e){
        ans[b] = num++;
        ans[e] = num++;
        b++;
        e--;
    }
    if(b==e){
        ans[b] = num;
    }
    for(auto i: ans){
        cout << i << " ";
    }
    cout << "\n";
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