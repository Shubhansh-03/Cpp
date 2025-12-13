#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    vector<vector<int>> g(n);
    for(int i=0;i<n;i++){
        g[i] = {l[i], i+1};
    }
    sort(g.begin(), g.end());

    for(int i=0;i<n-1;i++){
        int num = g[i][0];
        int b = i+1, e = n-1;
        while(b<e){
            int sum = num+g[b][0]+g[e][0];
            if(sum < k){
                b++;
            }
            else if(sum > k){
                e--;
            }
            else{
                cout << g[i][1] << " " << g[b][1] << " " << g[e][1];
                return;
            }
        }
    }
    cout << "IMPOSSIBLE";
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
