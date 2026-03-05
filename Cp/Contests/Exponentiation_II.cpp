#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int exp(int base, int exp, int m){
    if(base == 0 && exp == 0){
        return 1;
    }
    else if(base == 0){
        return 0;
    }
    int res = 1;
    while(exp != 0){
        if(exp%2){
            res = (res*base)%m;
        }
        base = (base*base)%m;
        exp >>= 1;
    }
    return res;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int x = exp(b, c, mod-1);
    int ans = exp(a, x, mod);
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
