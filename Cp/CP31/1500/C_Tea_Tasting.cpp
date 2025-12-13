#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;

    vector<int> pref(n+1, 0);
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i]+b[i];
    }
    vector<int> cnt(n+1, 0), add(n+1, 0);
    for(int i=0;i<n;i++){
        int j = upper_bound(pref.begin(), pref.end(), a[i]+pref[i]) - pref.begin() - 1;
        cnt[i] += 1;
        cnt[j] -= 1;
        add[j] += a[i]-pref[j]+pref[i];
    }
    for(int i=0;i<n;i++){
        cnt[i+1] += cnt[i];
    }
    for(int i=0;i<n;i++){
        cout << cnt[i]*b[i] + add[i] << " ";
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
