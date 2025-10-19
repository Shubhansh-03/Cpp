/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve(int a, int b)
{
    if(a%2 == 1 && b%2 == 1){
        int temp = a*b;
        cout << temp+1 << endl;
        return;
    }
    else if(b%2 == 1){
        cout << -1 << endl;
        return;
    }
    else if(a%2 == 1){
        a *= 2;
        b /= 2;
        solve(a, b);    
    }
    else{
        int temp = a*(b/2) + 2;
        int ans = max(temp, a+b);
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
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}