#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int n, m;

void travel(vector<string>& a, vector<vector<int>>& vis, int x, int y){
    vis[x][y] = 1;

    vector<vector<int>> diff = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
    for(auto i: diff){
        if(x+i[0]>=0 && x+i[0]<n && y+i[1]>=0 && y+i[1]<m && a[x+i[0]][y+i[1]] == '.' && !vis[x+i[0]][y+i[1]]){
            travel(a, vis, x+i[0], y+i[1]);
        }
    }
}
void solve()
{
    cin >> n >> m;
    vector<string> a(n);
    for(auto& i: a) cin >> i;

    vector<vector<int>> vis(n, vector<int>(m, 0));
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == '.' && !vis[i][j]){
                ans++;
                travel(a, vis, i, j);
            }
        }
    }
    cout << ans;
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
