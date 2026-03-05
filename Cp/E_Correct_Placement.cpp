#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> l(n, vector<int>(2));
    for(auto& i: l) cin >> i[0] >> i[1];

    vector<int> val(2*n);
    for(int i=0;i<n;i++){
        val[2*i] = l[i][0];
        val[2*i+1] = l[i][1];
    }
    sort(val.begin(), val.end());
    map<int, int> m;
    int c = 0;
    for(auto i: val){
        if(!m[i]){
            m[i] = c++;
        }
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
