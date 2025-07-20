#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    // cout << a << b << c << d;
    int x, y, z;
    x = a+b;
    y = c-b;
    z = d-c;
    if(x==y && y==z) cout << "3" << endl;
    else if(x==y || y==z || z==x) cout << "2" << endl;
    else cout << "1" << endl;
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
