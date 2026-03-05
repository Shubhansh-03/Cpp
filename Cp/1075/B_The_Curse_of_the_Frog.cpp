#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<vector<int>> a(n, vector<int> (3));
    for(auto& i: a) cin >> i[0] >> i[1] >> i[2];
    if(x == 0){
        cout << 0 << endl;
        return;
    }

    int tjmp = 0;
    for(int i=0;i<n;i++){
        tjmp += (a[i][0] * (a[i][1] - 1));
    }
    if(tjmp >= x){
        cout << 0 << endl;
        return;
    }
    int minroll = -2e8;
    for(int i=0;i<n;i++){
        minroll = max(minroll, a[i][0]*a[i][1] - a[i][2]);
    }
    if(minroll <= 0){
        cout << -1 << endl;
        return;
    }
    int remaining = x - tjmp;
    int ans = ((remaining + minroll - 1) / minroll); 
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
