/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> l(n);
    for(auto &i: l){
        cin >> i.first;
    }
    for(auto &i: l){
        cin >> i.second;
    }
    sort(l.begin(), l.end());
    map<int, vector<int>> map;
    for(int i=n-1;i>=0;i--){

    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}