/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> l(m, vector<ll> (3));
    for(auto& i: l){
        cin >> i[0] >> i[1] >> i[2];
    }
    string ans = "";
    vector<ll> fib = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    for(int i=0; i<m;i++){
        if((l[i][0]>=fib[n] && l[i][1]>=fib[n] && l[i][2]>=(fib[n]+fib[n-1])) || (l[i][1]>=fib[n] && l[i][2]>=fib[n] && l[i][0]>=(fib[n]+fib[n-1])) || (l[i][2]>=fib[n] && l[i][0]>=fib[n] && l[i][1]>=(fib[n]+fib[n-1]))){
            ans += "1";
        }
        else{
            ans += "0";
        }
    }
    cout << ans << "\n";

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}