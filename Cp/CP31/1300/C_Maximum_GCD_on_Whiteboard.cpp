#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

bool check(vector<int> &l, int val, int k){
    int n = l.size();
    for(int i=0;i<n;i++){
        if(k<0){
            return false;
        }
        if(l[i]%val == 0 || l[i]/val >= 4){
            continue;
        } 
        else{
            k--;
        }
    }
    return k>=0;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    vector<int> f(n + 1, 0);
    for(auto& i: l) {
        cin >> i;
        f[i]++;
    }

    vector<int> mul(n + 1, 0);
    for (int d = 1; d <= n; d++) {
        for (int m = d; m <= n; m += d) {
            mul[d] += f[m];
        }
    }

    vector<int> suff(n+1, 0);
    suff[n] = f[n];
    for (int i = n-1; i >= 1; i--) {
        suff[i] = suff[i + 1] + f[i];
    }
    vector<int> lar(n + 1, 0);
    for (int d = 1; d <= n; d++) {
        if (4 * d <= n) {
            lar[d] = suff[4 * d];
        } else {
            lar[d] = 0;
        }
    }

    vector<int> both(n + 1, 0);
    for (int d = 1; d <= n; d++) {
        for (int m = 4 * d; m <= n; m += d) {
            both[d] += f[m];
        }
    }

    int ans = 1;
    for (int d = n; d >= 1; d--) {
        int good = mul[d] + lar[d] - both[d];
        int cost = n - good;
        
        if (cost <= k) {
            ans = d;
            break;
        }
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
