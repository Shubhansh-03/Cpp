#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;

    sort(a.begin(), a.end());

    vector<int> pref(n+1,0);
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i] + b[i];
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        int x = a[i];
        int swords = n-i;
        int levels = upper_bound(pref.begin(), pref.end(), swords) - pref.begin() - 1;
        ans = max(ans, x * levels); 
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
