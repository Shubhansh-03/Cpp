/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto &i: l) cin >> i;

    vector<int> pref(n);
    pref[0] = l[0];
    for(int i=1;i<n;i++){
        pref[i] = l[i]-l[i-1];
    }

    vector<int> ans(n);
    int num = 1;
    for(int i=0;i<n;i++){
        if(pref[i] == i+1){
            ans[i] = num++;
        }
        else{
            ans[i] = ans[i-pref[i]];
        }
    }
    for(auto i: ans) cout << i << " ";
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