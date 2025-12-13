#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(2*n);
    for(auto& i: l) cin >> i;

    map<int, int> m;
    for(auto i: l) m[i]++;

    vector<int> s;
    for(auto [k, v]: m){
        s.push_back(v);
    }
    int o = 0, e = 0;
    for(auto i: s){
        if(i&1) o++;
        else e++;
    }
    if(e==1 && o==0){
        if(s[0]%4 == 0){
            cout << 0 << endl;
            return;
        }
        else{
            cout << 2 << endl;
            return;
        }
    }
    else{
        cout << 2*e+o << endl;
    }
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
