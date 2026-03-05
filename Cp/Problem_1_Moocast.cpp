#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
struct coor{
    int x, y;
};
int bfs(vector<coor> l, int x){
    int n = l.size();
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dist = pow(l[i].x-l[j].x, 2) + pow(l[i].y-l[j].y, 2);
            if(dist <= x){
                a[i].push_back(j);
                a[j].push_back(i);
            }
        }
    }
    vector<int> vis(n);
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        vis[u] = 1;
        for(auto v: a[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            return 0;
        }
    }
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    vector<coor> l(n);
    for(auto& i: l) cin >> i.x >> i.y;
    int b = 0, e = 2e9;
    int ans = -1;
    while(b<=e){
        int x = (b+e)/2;
        int f = bfs(l, x);
        if(f){
            ans = x;
            e = x-1;
        }
        else{
            b = x+1;
        }
    }
    cout << (ans) << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("moocast.in", "r", stdin);
    freopen("moocast.out", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
