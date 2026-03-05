#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, t;
    cin >> n >> t;
    vector<vector<int>> l(n, vector<int> (2));
    for(auto& i: l) cin >> i[0] >> i[1];

    int minn = 1e6;
    int minind = -1;
    for(int i=0;i<n;i++){
        int arr = l[i][0];
        int d = l[i][1];
        if(arr < t){
            arr = arr+((t-arr)/d +(t-arr)%d?1:0)*d; 
            // cout << arr << " ";
        }
        if(arr < minn){
            minn = arr;
            minind = i;
        }
    }
    cout << minind+1;
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
