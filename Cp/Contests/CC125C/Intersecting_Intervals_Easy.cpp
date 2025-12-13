#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int n; 
    cin >> n;
    vector<int> x(n+2), y(n+2), px(n+2), sx(n+3), py(n+2), sy(n+3);
    for(int i=1;i<=n;i++) cin >> x[i];
    for(int i=1;i<=n;i++) cin >> y[i];

    px[0]=sx[n+1]=py[0]=sy[n+1]=0;
    for(int i=1;i<=n;i++){
        px[i] = max(x[i], px[i-1] + x[i]);
        py[i] = max(y[i], py[i-1] + y[i]);
    }
    for(int i=n;i>=1;i--){
        sx[i] = max(x[i], sx[i+1] + x[i]);
        sy[i] = max(y[i], sy[i+1] + y[i]);
    }

    int ans = LLONG_MIN;
    for(int i=1;i<=n;i++){
        int a = px[i] + sx[i] - x[i];
        int b = py[i] + sy[i] - y[i];
        ans = max(ans, a + b);
    }
    cout << ans << "\n";
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
