/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    sort(l.begin(), l.end());
    if(n==1){
        cout << abs(l[0]-s) << endl;
        return;
    }
    ll ans = 0;
    if(abs(l[n-1])-s < abs(l[0]-s)){
        ans = abs(l[n-1]-s);
        ans += abs(l[n-1]-l[0]);
    }
    else{
        ans = abs(l[0]-s);
        ans += abs(l[n-1]-l[0]);
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