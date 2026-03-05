#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void f1(){
    cout << "Alice\n";
    return;
}
void f2(){
    cout << "Bob\n";
    return;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int n = b - a;
    if(n <= 0){
        f1();
        return;
    }
    if(a-2*n >= 0 && b-3*n >= 0){
        f2();
    }
    else{
        f1();
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
