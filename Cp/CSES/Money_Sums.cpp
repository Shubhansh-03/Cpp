/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l){
        cin >> i;
    }
    int sum = accumulate(l.begin(), l.end(), 0);
    vector<int> dp(sum+1, 0);
    dp[0] = 1;
    for(int i=0;i<n;i++){
        for(int j=sum;j>0;j--){
            // cout << j << " " << l[i] << "||";
            if(j>=l[i]){
                // cout << "z";
                dp[j] = dp[j-l[i]] | dp[j];
            }
        }
        cout << endl;
    }
    int ans = accumulate(dp.begin(), dp.end(), 0)-1;
    cout << ans << endl;
    for(int i=1;i<=sum;i++){
        if(dp[i]){
            cout << i << " ";
        }
    }
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