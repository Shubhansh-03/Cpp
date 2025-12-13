#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    if(k>=n){
        cout << 1 << endl;
        return;
    }

    int ans = LLONG_MAX;
    for(int i=1;i*i<=n;i++){
        if(i>k){
            break;
        }
        if(n%i == 0){
            int j = 1;
            if(n/i <= k){
                j = n/i;
            }
            ans = min({ans, n/j, n/i});
        }
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
