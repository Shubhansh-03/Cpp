#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> l(n, vector<int> (2));
    for(auto& i: l) cin >> i[0] >> i[1];

    sort(l.begin(), l.end());
    int t = 0, ans = 0;
    for(auto i: l){
        t += i[0];
        ans += (i[1]-t);
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
