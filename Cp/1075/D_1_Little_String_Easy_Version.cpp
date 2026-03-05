#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
void solve() {
    int n, c;
    cin >> n >> c;
    string s;
    cin >> s;

    if (s[n-1] == '0') {
        cout << -1 << endl;
        return;
    }

    int ans = 1;      
    int check = 1;    

    for (int i=0;i<n-1;i++){
        if(s[i] == '1'){
            ans = (ans*2)%MOD;
            check = (check * 2)%c;
        }
        else{
            ans = (ans*i)%MOD;
            check = (check * i)%c;
        }
    }

    if(check == 0){
        cout << -1 << endl;
    } 
    else{
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
        solve();
    }
    return 0;
}
