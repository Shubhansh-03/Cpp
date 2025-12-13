#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    string s;
    cin >> s;
    int bad = 0;
    vector<int> pref(n, 0);
    pref[0] = l[0];
    for(int i=1;i<n;i++){
        pref[i] = max(pref[i-1], l[i]);
    }
    // for(auto i: pref) cout << i << " ";
    for(int i=1;i<n;i++){
        if(s[i] == 'R' && s[i-1] == 'L' && pref[i-1]>(i)){
            bad++;
        }
    }

    while(q--){
        int c;
        cin >> c;
        if(bad[c-1]){
            if(i-1 >= 1 and s[i-1] == 'L' and s[i] == 'R' and pmax[i-1] > i-1)bad--;
            if(i+1 <= n and s[i] == 'L' and s[i+1] == 'R' and pmax[i]> i)bad--;
            s[i] = s[i] ^ 'L' ^ 'R';
            if(i-1 >= 1 and s[i-1] == 'L' and s[i] == 'R' and pmax[i-1]> i-1)bad++;
            if(i+1 <= n and s[i] == 'L' and s[i+1] == 'R' and pmax[i]> i)bad++;
        }
    }
    // for(auto [k, v]: bad) cout << k << " ";

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
