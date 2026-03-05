#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];
    
    vector<int> l(n);
    int sum = (t[n-1] + t[0]) / (n - 1);
    
    l[0] = (sum + (t[1] - t[0])) / 2;
    
    int tot = l[0];
    for(int i=1;i<n-1;i++){
        int res = (sum + t[i+1] - t[i]) / 2 - tot;
        l[i] = res;
        tot += l[i];
    }
    
    l[n-1] = sum - tot;
    for(int i = 0; i < n; i++) cout << l[i] << " ";
    cout << "\n";
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
