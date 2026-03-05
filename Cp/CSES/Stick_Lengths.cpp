#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;
    sort(l.begin(), l.end());
    if(n&1){
        int mid = l[n/2];
        int ans = 0;
        for(auto i: l){
            ans += abs(i-mid);
        }
        cout << ans;
    }
    else{
        int mid = l[n/2];
        int ans = 0;
        for(auto i: l){
            ans += abs(i-mid);
        }
        mid = l[n/2+1];
        int temp = 0;
        for(auto i: l){
            temp += abs(i-mid);
        }


        cout << min(ans, temp);
    }
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
