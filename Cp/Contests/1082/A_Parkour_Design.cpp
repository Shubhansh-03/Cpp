#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int x, y;
    cin >> x >> y;

    if(y >= 0){
    int z = x - 2*y;
    if(z >= 0 && z%3 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }}
    else{
        int z = x-(-1*y*4);
        if(z >= 0 && z%3==0){
        cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
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
