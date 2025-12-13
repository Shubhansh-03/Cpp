#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    vector<int> pref(n+1, 0);
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i]+l[i];
    }

    int b=0, e=1;
    int ans = 0;
    while(e<=n && b<=e){
        int sum = pref[e]-pref[b];
        // cout << sum << " ";
        if(sum > k){
            b++;
        }
        else if(sum < k){
            e++;
        }
        else{
            ans++;
            e++;
        }
    }
    cout << ans ;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
