#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string s, t;
    cin >> s >> t;

    map<char, int> m1;
    map<char, int> m2;
    for(auto i: s) m1[i]++;
    for(auto i: t) m2[i]++;

    for(auto [a, b]: m1){
        if(m2[a] < b){
            cout << "Impossible" << endl;
            return;
        }
    }

    string small = "";
    for(auto [a, b]: m2){
        int t = m1[a];
        while(m2[a]>t){
            m2[a]--;
            small += a;
        }
    }
    string ans = "";
    // cout << small << endl;
    int b1 = 0, b2 = 0;
    while(b1 < s.size() || b2 < small.size()){
        if(b1 == s.size()){
            ans += small[b2++];
            continue;
        }
        if(b2 == small.size()){
            ans += s[b1++];
            continue;
        }
        if(s[b1] <= small[b2]){
            ans += s[b1++];
        }
        else{
            ans += small[b2++];
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
