#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int vis[1000005];
int curr = 0;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int l;
        cin >> l;
        a[i].resize(l);
        for (int j = 0; j < l; ++j) {
            cin >> a[i][j];
        }
    }

    curr++; 
    vector<int> ans;
    vector<int> blg(n, 0);

    for(int step=0;step<n;step++){
        int best = -1;
        vector<int> bests;

        for(int i=0;i<n;i++) {
            if (blg[i]) continue;

            vector<int> currs;
            for(int k=a[i].size()-1;k>=0;k--){
                int u = a[i][k];
                
                if (vis[u] == curr) continue;
                
                int f = 0;
                for(int val : currs) {
                    if(val == u) {
                        f = 1;
                        break;
                    }
                }
                if(!f) {
                    currs.push_back(u);
                }
            }

            if (best == -1 || currs < bests) {
                bests = currs;
                best = i;
            }
        }

        blg[best] = 1;
        for(auto i: bests){
            ans.push_back(i);
            vis[i] = curr; 
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
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
