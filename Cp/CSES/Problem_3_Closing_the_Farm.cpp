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
    vector<int> rem(n+1, 0);
    for(int i=0;i<n;i++){
        // if(i == n-1) break;
        int remove;
        cin >> remove;
        vector<int> vis(n+1, 0);
        for(int j=1;j<=n;j++){
            if(!rem[j]){
                queue<int> q;
                q.push(j);
                vis[j] = 1;
                while(!q.empty()){
                    int u = q.front();
                    q.pop();
                    vis[u] = 1;
                    for(auto v: a[u]){
                        if(!vis[v] && !rem[v]){
                            q.push(v);
                            vis[v] = 1;
                        }
                    }
                }
                break;
            }
        }
        int f = 0;
        for(int v=1;v<=n;v++){
            if(!vis[v] && !rem[v]){
                cout << "NO\n";
                f = 1;
                break;
            }
        }
        if(!f) cout << "YES\n";
        rem[remove] = 1;
    }

}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);
    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
