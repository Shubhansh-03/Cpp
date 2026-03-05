#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i]/x;
    }
    int ans = -1;
    for(auto i: a){
        ans = max(ans, i+(sum-i/x)*y);
    }
    cout << ans << endl;
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
