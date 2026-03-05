#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<int> vis;
int diameter = 0;

int dfs(int x) {
    vis[x] = 1;

    int max1 = 0, max2 = 0; // top two heights

    for (int i : a[x]) {
        if (!vis[i]) {
            int h = 1 + dfs(i);
            if (h > max1) {
                max2 = max1;
                max1 = h;
            } else if (h > max2) {
                max2 = h;
            }
        }
    }

    diameter = max(diameter, max1 + max2);
    return max1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    a.assign(n, {});
    vis.assign(n, 0);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    dfs(0);
    cout << diameter;
}
