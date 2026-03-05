#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(auto &i: a) cin >> i;
    for(auto &i: b) cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = -1;
    int s = 0;
    for(int i=0;i<n;i++){
        int dist;
        while(true){
            if(s == m-1){
                dist = abs(a[i]-b[s]);
                break;
            }
            if(abs(a[i]-b[s]) >= abs(a[i]-b[s+1])){
                s++;
            }
            else{
                dist = abs(a[i]-b[s]);
                break;
            }
        }
        // cout << dist << " ";
        ans = max(dist, ans);
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
