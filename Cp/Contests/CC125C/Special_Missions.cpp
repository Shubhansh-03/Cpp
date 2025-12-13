#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> l(n);
    for(auto& i: l) cin >> i;
    string s;
    cin >> s;
    int ans = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            ans+=l[i];
        }
        else{
            sum+=l[i];
        }
    }
    if(sum>c && ans >= c){
        cout << ans+sum-c << endl;
    }
    else{
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
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
