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

    vector<int> pref(n+1, 0);
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i]+l[i];
    }
    int b = 0, e = n-1;
    int sum = 0;
    int ans = 0;
    while(b < e){
        sum += l[b];
        if(sum < l[e]){
            ans += l[b];
            b++;
        }
        else{
            ans += l[b]+1;
            sum -= l[e];
            b++;
            e--;
        }
    }
    if(b == e){
        ans 
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
