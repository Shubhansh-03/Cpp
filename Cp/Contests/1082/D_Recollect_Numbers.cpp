#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve() {
    int n, k;
    cin >> n >> k;

    if (k < n || k > 2*n - 1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    if (k == n) {
        for (int i=1;i<=n;i++) {
            cout << i << " " << i << " ";
        }
        cout << endl;
        return;
    }

    int m = k-n+1;
    vector<int> res;

    res.push_back(1);
    res.push_back(2);
    res.push_back(1);

    for (int i=3;i<=m;i++) {
        res.push_back(i);
        res.push_back(i-1);
    }
    res.push_back(m);
    for (int i=m+1;i<=n;i++) {
        res.push_back(i);
        res.push_back(i);
    }

    for (int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
    cout << endl;
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
