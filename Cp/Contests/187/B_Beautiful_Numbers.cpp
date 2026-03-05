#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string n;
    cin >> n;

    vector<int> a(n.size(), 0);
    a[0] = n[0] - '1';
    for(int i=1;i<n.size();i++){
        a[i] = n[i] - '0';
    }
    sort(a.rbegin(), a.rend());
    int sum = accumulate(a.begin(), a.end(), 0ll);
    sum++;
    int ans = 0;
    while(sum >= 10){
        sum -= a[ans];
        ans++;
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
