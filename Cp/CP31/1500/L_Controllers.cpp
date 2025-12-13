#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    int add = 0, sub = 0;
    for(auto i: s){
        if(i=='+') add++;
        else sub++;
    }
    while(q--){
        int a, b;
        cin >> a >> b;
        int x = max(a, b);
        int y = min(a, b);
        int diff = x*add - y*sub;
        int del = x-y;
        if(del == 0){
            if(add == sub){
                cout << "YES\n";
                continue;
            }
            else{
                cout << "NO\n";
                continue;
            }
        }
        if(diff%del == 0 && (diff/del) <= n && diff/del >= 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";

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
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
