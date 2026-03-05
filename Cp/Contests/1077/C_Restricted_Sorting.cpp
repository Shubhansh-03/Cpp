#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    vector<int> b = a;
    sort(b.begin(), b.end());

    int ans = 2e9+10;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            ans = min(ans, max(a[i]-b[0], b[n-1]-a[i]));
        }
    }
    if(ans > 2e9){
        cout << -1 << endl;
    }
    else
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
