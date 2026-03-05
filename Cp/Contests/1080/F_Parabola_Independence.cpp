#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3, 0));
    for(auto& i: a) for(auto& j: i) cin >> j;

    vector<vector<int>> diff(n, vector<int> (n, 0));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int d = (a[i][1]-a[j][1])*(a[i][1]-a[j][1]) - 4*(a[i][0]-a[j][0])*(a[i][2]-a[j][2]);
            diff[i][j] = d;
            diff[j][i] = d;
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
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
