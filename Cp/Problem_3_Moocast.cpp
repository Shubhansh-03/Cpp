#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
struct cow{
    int x, y, p;
};
void solve()
{
    int n;
    cin >> n;
    vector<cow> l(n);
    for(auto& i: l){
        cin >> i.x >> i.y >> i.p;
    }
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                int dist = (pow((l[i].x - l[j].x), 2) + pow((l[i].y - l[j].y), 2));
                if(dist <= pow(l[i].p, 2)){
                    a[i].push_back(j);
                }
            }
        }
    }
    // for(auto i: a){
    //     for(auto j: i) cout << j << " ";
    //     cout << endl;
    // }
    int ans = -1;
    for(int i=0;i<n;i++){
        // if(!vis[i]){
        vector<int> vis(n);
        int num = 0;
        vis[i] = 1;
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            num++;
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
        ans = max(ans, num);
        // }
    }
    cout << ans;
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
