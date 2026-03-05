#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    if(s[0] == 'u') ans++; 
    if(s[n-1] == 'u') ans++; 
    s[n-1] = 's';
    int prev = 0, curr = -1;
    for(int i=1;i<n;i++){
        if(s[i] == 's'){
            curr = i;
            int mid = curr - prev -1;
            ans += mid/2;
            prev = curr;
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
