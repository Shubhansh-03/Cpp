#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod %2019
void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<int> suff(n+1, 0);
    int count = 1;
    for(int i=n-1;i>=0;i--){
        suff[i] = (suff[i+1] + count*(s[i]-'0'))mod;
        count = (count*10)mod;
    }
    unordered_map<int, int> mp;
    int ans = 0;
    for(int i=n;i>=0;i--){
        ans += mp[suff[i]];
        mp[suff[i]]++;
    }
    cout << ans;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
