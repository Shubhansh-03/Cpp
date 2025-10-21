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

    vector<int> pref(n);
    pref[0] = l[0];
    for(int i=1;i<n;i++){
        pref[i] = max(pref[i-1], l[i]);
    }

    for(int i=1;i<n;i+=2){
        l[i] = pref[i];
    }

    int ans = 0;
    for(int i=0;i<n;i+=2){
        if(i==0){
            if(l[i]>=l[i+1]){
                ans += (l[i]-l[i+1]+1);
                l[i] = l[i+1]-1;
            }
        }
        else if(i == n-1){
            if(l[i]>=l[i-1]){
                ans += (l[i]-l[i-1]+1);
                l[i] = l[i-1] -1;
            }
        }
        else{
            if(l[i]>=l[i-1]){
                ans += (l[i]-l[i-1]+1);
                l[i] = l[i-1] -1;
            }
            if(l[i]>=l[i+1]){
                ans += (l[i]-l[i+1]+1);
                l[i] = l[i+1]-1;
            }
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
