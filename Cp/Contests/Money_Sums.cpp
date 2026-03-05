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
    
    int sum = accumulate(a.begin(), a.end(), 0ll);
    vector<int> dp(sum+1, 0);
    dp[0] = 1;

    for(int i=0;i<n;i++){
        for(int j=sum;j>=0;j--){
            if(j-a[i] >= 0){
                dp[j] = max(dp[j], dp[j-a[i]]);
            }
        }

    }
    int ans = 0;
    for(int i=1;i<=sum;i++){
        if(dp[i] == 1)
        ans++;
    }
    cout << ans << endl;
    for(int i=1;i<=sum;i++){
        if(dp[i]) cout << i << " ";
    }
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
