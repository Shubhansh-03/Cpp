/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> l(n);
    for(auto &i: l){
        cin >> i.first >> i.second;
    }
    sort(l.begin(), l.end(), compare);
    cout << l[0].first;
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