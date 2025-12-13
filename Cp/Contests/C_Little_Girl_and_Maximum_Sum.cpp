#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    vector<int> times(n+1, 0);
    while(q--){
        int a, b;
        cin >> a >> b;
        times[a-1]++;
        times[b]--;
    }
    for(int i=1;i<=n;i++){
        times[i] += times[i-1];
    }
    sort(times.rbegin(), times.rend());
    sort(l.rbegin(), l.rend());
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += l[i]*times[i];
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
