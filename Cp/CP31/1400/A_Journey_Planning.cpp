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

    map<int, int> m;
    int grp;
    int ans = 0;
    for(int i=0;i<n;i++){
        m[l[i]-i]+=l[i];
        if(ans < m[l[i]-i]){
            ans = m[l[i]-i];
            grp = l[i]-i;
        }
    }
    int res = 0;
    for(int i=0;i<n;i++){
        if(l[i]-i == grp){
            res += l[i];
        }
    }
    cout << res << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
