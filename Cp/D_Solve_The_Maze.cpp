#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for(auto& i: a) cin >> i;

    int g=0, b=0;
    for(auto i: a){
        for(auto j: i){
            if(j == 'G') g++;
            if(j == 'B') b++;
        }
    }
    if(g==0){
        cout << "Yes\n";
        return;
    }

    vector<vector<int>> diff = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(a[i][j] == 'B'){
                for(auto del: diff){
                    int t1 = i+del[0], t2 = j+del[1];
                    if(t1>=0 && t1<n && t2>=0 && t2<m && a[t1][t2] == 'G'){
                        cout << "No\n";
                        return;
                    }
                    else if(t1>=0 && t1<n && t2>=0 && t2<m && a[t1][t2] == '.'){
                        a[t1][t2] = '#';
                    }
                }
            }
        }
    }
    if(a[n-1][m-1] == '#'){
        cout << "No\n";
        return;
    }
    queue<vector<int>> q;
    q.push({n-1, m-1});
    vector<vector<int>> vis(n, vector<int> (m, 0));
    while(!q.empty()){
        auto u = q.front();
        q.pop();
        int x = u[0], y = u[1];
        for(auto i: diff){
            int t1 = x+i[0], t2 = y+i[1];
            if(t1>=0 && t1<n && t2>=0 && t2<m && a[t1][t2] != '#' && !vis[t1][t2]){
                q.push({t1, t2});
                vis[t1][t2] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 'G' && !vis[i][j]){
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
