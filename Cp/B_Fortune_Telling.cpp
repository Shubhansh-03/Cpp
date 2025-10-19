/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> l(n);
    for(auto &i: l){
        cin >> i;
    }
    int c = x&1;
    for(auto i: l){
        c = c^(i&1);
    }
    if(c==(y&1)){
        cout << "Alice\n";
    }
    else{
        cout << "Bob\n";
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