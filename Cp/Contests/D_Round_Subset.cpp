#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    vector<vector<int>> b(n, vector<int> (2, 0));
    for(int i=0;i<n;i++){
        while(a[i]%2 == 0){
            b[i][0]++;
            a[i] >>= 1;
        }
        while(a[i]%5 == 0){
            b[i][1]++;
            a[i]/=5;
        }
    }

    // for(auto i: b) cout << i[0] << " " << i[1] << endl;

    vector<vector<int>> dp(k+1, vector<int>(2, 0));
    for(int i=0;i<n;i++){
        for(int j=k;j>=1;j--){
            int x = dp[j-1][0]+b[i][0];
            int y = dp[j-1][1]+b[i][1];
            int r = min(x, y);
            if(r >= min(dp[j][0], dp[j][1])){
                dp[j][0] = x;
                dp[j][1] = y;
            }
        }
    }
    cout << min(dp[k][0], dp[k][1]);

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
