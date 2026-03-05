#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    int sum = accumulate(a.begin(), a.end(), 0ll);
    vector<int> pref(n+1, 0);
    pref[0] = a[0];
    for(int i=0;i<n;i++){
        pref[i+1] = min(pref[i], a[i]);
    }
    int maxn = 0;
    for(auto i: a) maxn = max(maxn, i);

    int curr = h % sum;
    int ans = (h/sum)*(n+k);

    if(curr == 0) {
        cout << ans-k << endl;
        return;
    }

    int prefs = 0;
    for(int i=0;i<n;i++){
        ans++;
        prefs += a[i];
        int temp = prefs - pref[i+1] + maxn;
        if(temp >= curr){
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
