#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void dfs(int node, vector<int>& dist, vector<vector<int>>& adj){
    if(adj[node].empty()){
        dist[node] = 0;
        return;
    }
    int sum = 0;
    for(auto i: adj[node]){
        dfs(i, dist, adj);
        sum += (dist[i]+2)%mod;
    }
    dist[node] = sum;
    return;
}
void dfs1(int node, vector<int>& dist, vector<vector<int>>& adj){
    for(auto i: adj[node]){
        dist[i] = (dist[node]+dist[i]+1)%mod;
        dfs1(i, dist, adj);
    } 
    return;
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n;i++){
        int l, r;
        cin >> l >> r;
        if(l==0 && r==0) continue;
        adj[i+1].push_back(l);
        adj[i+1].push_back(r);
    }
    vector<int> dist(n+1, -1);
    dfs(1, dist, adj);
    dfs1(1, dist, adj);
    for(int i=1;i<=n;i++){
        cout << (dist[i]+1)%mod << " ";
    }
    cout << endl;
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
