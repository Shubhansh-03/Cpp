/*
*/
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

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += min({i+1, k, n-i, n-k+1})*l[i];
    }
    double ans = (double)sum/(double)(n-k+1);
    // cout << sum << endl;
    // cout << ans << endl;
    printf("%.10f\n",ans);
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