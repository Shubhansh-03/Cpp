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

    if(n == 2){
        cout << 2 << endl;
        for(auto i: l) cout << i << " ";
        cout << endl;
    }

    int ans = 1;
    vector<int> a;
    a.push_back(l[0]);
    int inc = 0;
    if(l[1]>l[0]) inc = 1;
    for(int i=1;i<n;i++){
        
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
