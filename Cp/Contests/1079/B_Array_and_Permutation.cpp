#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> a(n);
    for(auto& i: p) cin >> i;
    for(auto& i: a) cin >> i;

    vector<int> val(n, 0);
    int curr = 0;
    for(int i=0;i<n;i++){
        while(curr<n && p[curr]!=a[i]){
            curr++;
        }
        if(curr == n){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
