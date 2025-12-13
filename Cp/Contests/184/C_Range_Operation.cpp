#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> pref(n + 1);
    pref[0] = 0;
    int sum = accumulate(a.begin(), a.end(), 0ll);
    for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + a[i];
    }
    int maxg = 0; 
    int maxf = INT_MIN; 
    int g, f;
    for(int i = 1; i <= n; i++) {
        f = pref[i-1] - i*i + i;
        maxf = max(maxf, f);
        g = i*i + i - pref[i];
        maxg = max(maxg, maxf + g);
    }
    cout << sum + maxg << endl;
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
