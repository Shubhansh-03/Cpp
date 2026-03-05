#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int dist = 0;
    
    for(int i=1;i<n;i++){
        dist += abs(l[i]-l[i-1]);
    }
    int ans = dist-abs(l[1]-l[0]);
    for(int i=1;i<n-1;i++){
        ans = min(ans, dist-abs(l[i]-l[i-1])-abs(l[i]-l[i+1])+abs(l[i-1]-l[i+1]));
    }
    ans = min(ans, dist-abs(l[n-1]-l[n-2]));
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
