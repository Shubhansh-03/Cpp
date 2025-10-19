/*
*/
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
    int count = 0;
    for(auto i: s){
        if(i=='*'){
            count ++ ;
        }
    }    
    int lasi = -1, curr = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(curr == 0 && s[i]=='*'){
            lasi = i;
            curr = 1;
        }
        else if(lasi!=-1 && s[i] == '*'){
            ans += min(curr, count-curr)*(i-lasi-1);
            lasi = i;
            curr++;
        }
    }
    cout << ans << endl;
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