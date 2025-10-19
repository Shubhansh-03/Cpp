/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    vector<vector<ll>> ind(n+1);
    for (int i = 0; i < n; i++)
    {
        ind[l[i]].push_back(i);
    }
    ll last = 0, begin = 0;
    map<ll, ll> map;

    ll ans = 1;
    while(true){
        // cout << begin << " " << last << endl;
        ll next = INT_MIN;
        for(int i=begin;i<=last;i++){
            map[l[i]]++;
            if(map[l[i]]<ind[l[i]].size() && ind[l[i]][map[l[i]]]>last){
                next = max(next, ind[l[i]][map[l[i]]]);
            }
            else if(map[l[i]]>=ind[l[i]].size()){
                cout << ans << endl;
                return;
            }
        }
        begin = last+1;
        last = next;
        ans++;
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