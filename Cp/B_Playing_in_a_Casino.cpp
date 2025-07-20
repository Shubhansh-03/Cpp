/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool compareRows(vector<ll>& r1, vector<ll>& r2){
    return r1[0] > r2[0];
}
void solve()
{
    ll n, m;
    cin >> n >>m;
    vector<vector<ll>> l(m, vector<ll> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> l[j][i];
        }
    }
    // sort(l.begin(), l.end());
    for(auto& i: l){
        sort(i.begin(), i.end());
    }
    // cout << l[0][n-1];
    ll ans = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans += (j)*l[i][j]-(n-1-j)*l[i][j];
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