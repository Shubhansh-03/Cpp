#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int dist = 0;
    map<int, int> m;
    for(auto i: l){
        m[i]++;
        if(m[i]==1){
            dist++;
        }
    }
    int ans = 1e18;
    for(int i=0;i<n;i++){
        if(l[i]>=dist){
            ans = min(ans, l[i]);
        }
    }
    cout << ans << endl;
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
