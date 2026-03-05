#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n+1);
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vector<int> vis(n+1, 0);
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int source = q.front();
                q.pop();
                vis[source] = 1;
                for(auto it: a[source]){
                    if(!vis[it]){ 
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
            ans.push_back(i);
        }
    }
    cout << ans.size()-1 << endl;
    for(int i=1;i<ans.size();i++){
        cout << 1 << " " << ans[i] << endl;
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
