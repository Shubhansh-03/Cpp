#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    vector<int> vis(n+1, 0);
    int ans = 1;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int ind = i;
            while(!vis[ind]){
                vis[ind] = ans;
                ind = a[ind-1];
            }
            if(vis[ind] == ans) ans++;
        }
    }
    cout << ans - 1 << endl;
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
