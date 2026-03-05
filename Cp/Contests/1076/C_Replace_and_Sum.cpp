#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;

    vector<int> suff(n+1, 0);
    for(int i=n-1;i>=0;i--){
        suff[i] = max(suff[i+1], max(a[i], b[i]));
    }
    vector<int> pref(n+1, 0);
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i] + suff[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << " ";
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
