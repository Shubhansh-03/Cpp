#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    int ptr = m-1;
    if(a[n-1] > b[0]){
        cout << -1;
        return;
    }
    while(ptr > 0){
        if(a[n-1] <= b[ptr]){
            ans += b[ptr]-a[n-1];
            ptr--;
        }
    }
    int f = 0;
    if(a[n-1] == b[0]){
        f = 1;
    }
    for(int i=0;i<n;i++){
        ans += m*a[i];
    }
    if(!f){
        ans += b[0]-a[n-2];
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
