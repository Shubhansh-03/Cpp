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
    vector<vector<int>> g;
    for(int i=0;i<n;i++){
        g.push_back({l[i], i+1});
    }
    sort(g.begin(), g.end());

    int b = 0, e = n-1;
    while(b<e){
        int sum = g[b][0]+g[e][0];
        if(sum < k){
            b++;
        }
        else if(sum > k){
            e--;
        }
        else{
            cout << g[b][1] << " " << g[e][1];
            return;
        }
    }
    // map<int, int> m;
    // for(int i=0;i<n;i++){
    //     if(m[k-l[i]]!=0){
    //         cout << m[k-l[i]] << " " << i+1;
    //         return;
    //     }
    //     m[l[i]] = i+1;
    // }
    cout << "IMPOSSIBLE";
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
