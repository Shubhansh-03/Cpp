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
    int f1 = 0, f2 = 1;
    for(int i=0;i<n-3;i++){
        string g = s.substr(i, 4);
        // cout << g << " ";
        if(g == "2026"){
            f1 = 1;
        }
        else if(g == "2025"){
            f2 = 0;
        }
    }
    if(f1 || f2){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
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
