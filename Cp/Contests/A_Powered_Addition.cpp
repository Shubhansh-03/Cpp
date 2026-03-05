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

    int ans = 0;
    int maxn = a[0];
    for(int i=1;i<n;i++){
        int diff = a[i] - maxn;
        int x = 0;
        if(diff < 0){
            diff = abs(diff);
            while(diff > 0){
                diff -= 1<<x;
                x++;
            }
            ans = max(ans, x);
        }
        maxn = max(maxn, a[i]);
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
