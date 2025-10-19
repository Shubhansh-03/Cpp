/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> l(m);
    for(auto& i: l){
        cin >> i;
    }

    vector<int> ans;
    int b = 0;
    int bs = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'B'){
            
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