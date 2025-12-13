#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int f = 0;
    int f1 = 0;
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(s[i-1] == '>' || s[i] == '>'){
            f1 = 1;
        }
        if(f1 && s[i]=='<'){
            f = 1;
            break;
        }
        if((s[i-1] == '*' && s[i] == '*') || (s[i-1] == '*' && s[i] == '<') || (s[i-1] == '>' && s[i] == '*')){
            f = 1;
            break;
        }
    }
    if(f){
        cout << -1 << endl;
        return;
    }
    else{
        int c1 = 0, c2 = 0;
        for(auto i: s){
            if(i == '<' || i=='*'){
                c1++;
            }
            if(i == '>' || i=='*') {
                c2++;
            }
        }
        cout << max(c1,c2) << endl;
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
