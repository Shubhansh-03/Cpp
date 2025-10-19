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
    vector<int> dp(n+1, 0);
    vector<int> l(n);
    for(auto& i: l){
        cin >> i;
    }

    vector<int> lis;
    for(auto x: l){
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if(it == lis.end())
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