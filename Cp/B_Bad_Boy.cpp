/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    if(x == 1 && y == 1){
        cout << "1 " << m << " " << n << " 1" << endl;
        // printf("%d", m);
        // PLEASE SEND HELP !!!!!
    }
    else{
        cout << "1 1 " << n << " "<< m << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}