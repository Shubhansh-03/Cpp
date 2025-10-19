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
    for(int i=0;i<n;i++){
        l[i] = i+1;
    }
    cout << "2\n";
    for(auto i: l){
        cout << i << " ";
    }
    cout << '\n';
    for(int i=n-1;i>=0;i--){
        cout << l[i] << " ";
    }
    
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
    while(test--)
    {
        solve();
    }
    return 0;
}