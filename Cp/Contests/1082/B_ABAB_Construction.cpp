#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ra = (n+1)/2;
    int rb = n/2;

    for(int i=0;i<n;i++){
        int len = n-i;

        if(len%2 != 0){
            char f;
            if(ra > rb) f = 'a';
            else f = 'b';

            if(s[i] != '?' && s[i] != f){
                cout << "NO\n";
                return;
            }
            if(f == 'a') ra--;
            else rb--;

        } 
        else{
            if(s[i] == 'a'){
                if(ra > 0) ra--;
                else{ 
                    cout << "NO\n"; 
                    return; }
            }
            else if(s[i] == 'b'){
                if(rb > 0) rb--;
                else { 
                    cout << "NO\n"; 
                    return; 
                }
            }
            else{
                if (s[i+1] == 'a') {
                    rb--; 
                } 
                else if(s[i+1] == 'b'){
                    ra--;
                } 
                else{
                    if(ra > 0) ra--;
                    else rb--;
                }
            }
        }
    }

    cout << "YES\n";
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
