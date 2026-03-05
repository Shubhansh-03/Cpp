#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i1 = 0, i2 = 0;
    int ans = 0;
    while(i1<n && i2<m){
        if(a[i1]-k <= b[i2] && a[i1]+k >= b[i2]){
            i1++;
            i2++;
            ans++;
        }
        else if(a[i1]-k < b[i2]){
            i1++;
        }
        else{
            i2++;
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
