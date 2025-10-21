#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> dp(n);
    int cv = 0, no = 0, nw = 0;
    for(int i=0;i<n;i++){
        if(l[i]=='v'){
            cv++;
            if(cv>1){
                nw++;
            }
        }
        else{
            cv = 0;
            no++;
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
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
