#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto& i: a) cin >> i;
    int l, r;
    cin >> l >> r;

    vector<int> prefs(n+1, 0), prefx(n+1, 0);
    for(int i=0;i<n;i++){
        prefs[i+1] = prefs[i] + a[i];
        prefx[i+1] = prefx[i] ^ a[i];
    }
    vector<int> p(n+1);
    for(int i=0;i<n;i++){
        p[i+1] = prefs[i+1] - prefx[i+1];
    }
    int b = 0, e = n;
    int curr = prefs[n] - prefx[n];
    while(b < e){}
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
