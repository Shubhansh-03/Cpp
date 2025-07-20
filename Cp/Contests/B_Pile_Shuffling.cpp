/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool compare(vector<ll> a, vector<ll> b){
    return a[3]-a[1] < b[3]-b[1];
}
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> l(n, vector<ll> (4));
    for(auto &i: l){
        for(auto &j: i){
            cin >> j;
        }
    }
    sort(l.begin(), l.end(), compare);
        
    // cout << l[0][0] << endl;
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