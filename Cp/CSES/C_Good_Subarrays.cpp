#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        l[i] = (int)(s[i]-'0');
    }

    vector<int> pref(n+1, 0);
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i] + l[i];
    }

    // for(auto i: pref) cout << i << " ";
    map<int, int> m;
    int ans = 0;
    for(int i=0;i<=n;i++){
        m[pref[i]-i]++;
    }
    for(auto [k, v]: m){
        ans += (v*(v-1))/2;
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
