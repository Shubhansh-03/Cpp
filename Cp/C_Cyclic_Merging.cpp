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

    vector<int> pw;
    pw.push_back(max(l[0], l[n-1]));
    for(int i=0;i<n-1;i++){
        pw.push_back(max(l[i], l[i+1]));
    }
    sort(pw.begin(), pw.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=l[i];
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
