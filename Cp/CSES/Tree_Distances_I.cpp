#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
vector<vector<int>> a(2e5);
vector<int> dist2(2e5, 0);
vector<int> dist1(2e5, 0);

vector<int> vis(2e5, 0);

void dfs1(int x, int dist){
    vis[x] = 1;
    dist1[x] = dist;

    for(auto i: a[x]){
        if(!vis[i]){
            dfs1(i, dist+1);
        }
    }
}

void dfs2(int x, int dist){
    vis[x] = 1;
    dist2[x] = dist;

    for(auto i: a[x]){
        if(!vis[i]){
            dfs2(i, dist+1);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    dfs1(0, 0);
    int maxd = -1, ind = -1;
    for(int i=0;i<n;i++){
        if(dist1[i] > maxd){
            maxd = dist1[i];
            ind = i;
        }
    }

    // for(int i=0;i<n;i++){
    //     cout << dist1[i] << " ";
    // }
    fill(dist1.begin(), dist1.end(), 0ll);
    fill(vis.begin(), vis.end(), 0ll);

    dfs1(ind, 0);
    maxd = -1, ind = -1;
    for(int i=0;i<n;i++){
        if(dist1[i] > maxd){
            maxd = dist1[i];
            ind = i;
        }
    }

    // for(int i=0;i<n;i++) cout << dist1[i] << " ";

    fill(vis.begin(), vis.end(), 0ll);
    dfs2(ind, 0);
    for(int i=0;i<n;i++){
        cout << max(dist1[i], dist2[i]) << " ";
    }

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
