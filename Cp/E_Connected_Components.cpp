#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

const int N = 2e5;
vector<unordered_set<int>> adj(N);
set<int> unvis;
vector<int> sz;
int curr = 0;

void dfs(int x){
    sz[curr]++;
    auto it = unvis.begin();
    while(it != unvis.end()){
        if(adj[x].count(*it)){
            it++;
        }
        else{
            int last = *it;
            unvis.erase(it);
            dfs(last);
            it = unvis.upper_bound(last);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        adj[a].insert(b);
        adj[b].insert(a);
    }

    for(int i=0;i<n;i++) unvis.insert(i);
    for(int i=0;i<n;i++){
        auto it = unvis.find(i);
        if(it != unvis.end()){
            sz.push_back(0);
            unvis.erase(it);
            dfs(i);
            curr++;
        }
    }
    cout << curr << endl;
    sort(sz.begin(), sz.end());
    for(int i=0;i<curr;i++){
        cout << sz[i] << " ";
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
