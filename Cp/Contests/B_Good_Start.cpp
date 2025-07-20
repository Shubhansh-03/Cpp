/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll w, h, a, b;
    cin >> w >> h >> a >> b;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    
    if((abs(x2-x1))%a!=0 && (abs(y2-y1)%b!=0)){
        cout << "No\n";
    }
    else{
        if((x2-a<x1 && x1<(x2+a)) && abs(y2-y1)%b!=0){
            cout << "No\n";
        }
        else if((y2-b<y1 && y1<(y1+b)) && abs(x2-x1)%a!=0){
            cout << "No\n";
        }
        else
        cout << "Yes\n";
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