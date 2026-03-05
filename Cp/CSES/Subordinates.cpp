#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
vector<vector<int>> tree(2e5);
vector<int> ss(2e5);

void dfs(int x){
    ss[x] = 1;

    for(int child : tree[x]){
        dfs(child);
        ss[x] += ss[child];
    }
}

void solve()
{
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int par;
        cin >> par;

        par--;
        tree[par].push_back(i+1);
    }
    dfs(0);
    for(int i=0;i<n;i++){
        cout << ss[i]-1 << " ";
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
