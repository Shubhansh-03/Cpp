#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007


void solve() {
    int n, k;
    cin >> n >> k;

    int bit = 0;
    int temp = n;
    while (temp > 1) {
        temp >>= 1;
        bit++;
    }

    vector<vector<int>> dp(bit+1, vector<int>(bit+1, 0));
    dp[0][0] = 1;

    for (int i=1;i<=bit;i++) {
        dp[i][0] = 1;
        for (int j=1;j<=i;j++) {
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        }
    }

    int ans = 0;

    for (int i=0;i<bit;i++) {
        int minr = max(0ll, k-i);

        for (int r=minr;r<=i;r++) {
            ans += dp[i][r];
        }
    }

    if ((bit+1) > k) {
        ans++;
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
