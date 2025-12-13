#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    if(n%2 == 0){
        cout << n/2 << " " << n/2 << endl;
        return;
    }
    int ans = LLONG_MAX;
    int x, y;
    for(int i=1;i*i<=n;i++){
        // cout << "hehe";
        int a1 = i;
        int b1 = n-i;
        int a2 = n/i, b2 = n-a2;
        if(n%a1 == 0){
            int c = lcm(a1, b1);
            if(c<ans){
                x = a1;
                y = b1;
            }
            if(a2 == 0 || b2 == 0){
                continue;
            }
            c = lcm(a2, b2);
            if(c<ans){
                x = a2, y = b2;
            }
        }
    }
    cout << x << " " << y << endl;
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
