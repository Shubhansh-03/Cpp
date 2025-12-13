#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    if(n == 1){
        cout << 1 << endl;
        return;
    }
    else if(n == 2){
        cout << 9 << endl;
    }
    else if(n==3){
        cout << 29 << endl;
    }
    else if(n==4){
        cout << 56 << endl;
    }
    else{
        int ans = 3*n*(n-1) - 3 + n*n - 1 + n*(n-2) -1;
        cout << ans << endl;
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
