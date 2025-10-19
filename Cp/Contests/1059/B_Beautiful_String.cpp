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
    string s;
    cin >> s;
    int ans = 0;
    vector<int> a;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            ans++;
            a.push_back(i+1);
        }
    }
    cout << ans << endl;
    for(auto i: a) cout << i << " ";
    cout << endl;
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