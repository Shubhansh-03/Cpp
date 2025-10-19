/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int n;
int dfs(vector<vector<int>> l, int i, vector<int> vis){
    cout << n;
    int ans = 0;
    vis[i] = 0;
    for(auto node: l[i]){
        if(vis[node] != -1)
        ans += ((node<=n)?1:(0)) + dfs(l, node, vis);
    }
    return vis[i] = ans;
}
void solve()
{
    int m;
    cin >> n >> m;
    vector<vector<int>> l(n+m+1);
    for(int i=0;i<m;i++){
        int k;
        cin >> k;
        while(k--){
            int t;
            cin >> t;
            l[n+1+i].push_back(t);
            l[t].push_back(n+i+1);
        }
    }
    // for(auto i: l){
    //     for(auto j: i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> vis(n+m+1, -1);

    for(int i=1;i<=n;i++){
        if(vis[i] == -1){
            // cout << dfs(l, i, vis) << " ";
        }
        else{
            // cout << vis[i] << " ";
        }
    }
}
int32_t main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}