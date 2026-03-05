#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

vector<vector<int>> a(1e5);
vector<int> vis(1e5, 0);

double dfs(int x) {
    vis[x] = 1;

    double exp = 0.00;
    double branch = 0.00;
    for (auto i : a[x]) {
        if (!vis[i]) {
            branch += 1.00;
            exp += (1.00 + dfs(i));
        }
    }
    if (branch == 0.00)
        return 0.00;
    return (double)(exp / (double)branch);
}

void solve() {
    cout << fixed << setprecision(15);
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    double ans = dfs(0);
    cout << ans;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test = 1;
    // cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}
