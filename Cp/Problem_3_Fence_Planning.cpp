#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
struct coor{
    int x, y;
};
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<coor> l(n);
    for(auto& i: l) cin >> i.x >> i.y;

    vector<vector<int>> a(n+1);
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    int ans = 1e9;
    vector<int> vis(n+1, 0);
    for(int i=1;i<n;i++){
        if(!vis[i]){
            int minx = 1e9, miny = 1e9, maxx = -1, maxy = -1;
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int u = q.front();
                q.pop();
                vis[u] = 1;
                minx = min(minx, l[u-1].x);
                miny = min(miny, l[u-1].y);
                maxx = max(maxx, l[u-1].x);
                maxy = max(maxy, l[u-1].y);
                for(auto v: a[u]){
                    if(!vis[v]){
                        q.push(v);
                        vis[v] = 1;
                    }
                }
            }
            ans = min(ans, 2*(maxx-minx + maxy-miny));
        }
    }
    cout << ans;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
