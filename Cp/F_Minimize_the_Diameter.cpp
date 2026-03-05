#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

vector<vector<int>> a1(2e5);
vector<vector<int>> a2(2e5);

vector<int> vis(2e5, 0);

vector<int> dist(2e5, 0);

void dfs(int x, int d){
    vis[x] = 1;
    dist[x] = d;

    for(auto i: a1[x]){
        if(!vis[i]){
            dfs(i, d+1);
        }
    }

}

void dfs1(int x, int d){
    vis[x] = 1;
    dist[x] = d;

    for(auto i: a2[x]){
        if(!vis[i]){
            dfs1(i, d+1);
        }
    }

}


void solve()
{
    int n, m;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        a1[u].push_back(v);
        a1[v].push_back(u);
    }
    cin >> m;
    for(int j=0;j<m-1;j++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        a2[u].push_back(v);
        a2[v].push_back(u);
    }

    dfs(0, 0);
    int maxd = -1, ind = -1;
    for(int i=0;i<n;i++){
        if(dist[i] > maxd){
            maxd = dist[i];
            ind = i;
        }
    }
    fill(dist.begin(), dist.end(), 0ll);
    fill(vis.begin(), vis.end(), 0ll);

    dfs(ind, 0);
    maxd = -1;
    for(int i=0;i<n;i++){
        maxd = max(maxd, dist[i]);
    }


    fill(dist.begin(), dist.end(), 0ll);
    fill(vis.begin(), vis.end(), 0ll);
    dfs1(0, 0);
    int maxd1 = -1, ind1 = -1;
    for(int i=0;i<m;i++){
        if(dist[i] > maxd1){
            maxd1 = dist[i];
            ind1 = i;
        }
    }
    fill(dist.begin(), dist.end(), 0ll);
    fill(vis.begin(), vis.end(), 0ll);

    dfs1(ind1, 0);
    maxd1 = -1;
    for(int i=0;i<m;i++){
        maxd1 = max(maxd1, dist[i]);
    }

    int ans = max({maxd, maxd1, (int)(ceil(maxd/2.0)+ceil(maxd1/2.0)+1)});
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
