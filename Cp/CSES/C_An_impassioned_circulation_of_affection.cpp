#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<vector<int>> dp(n+1, vector<int> (26, -1));
    while(q--){
        int m;
        char c;
        cin >> m >> c;

        if(dp[m][c-'a'] != -1){ 
            cout << dp[m][c-'a'] << endl;
            continue;
        }
        int b = 0, e = 0;
        int count = 0;
        int ans = 0;
        while(e < n && b <= e){
            if(s[e] != c){
                if(count < m){
                    e++;
                    count++;
                }
                else{
                    if(s[b]!=c) count--;
                    b++;
                }
            }
            else{
                e++;
            }
            ans = max(ans, e-b);
        }
        dp[m][c-'a'] = ans;
        cout << ans << endl;
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
