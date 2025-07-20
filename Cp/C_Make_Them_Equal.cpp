/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    if(s[n-1]==c){
        for(ll i=0;i<n-1;i++){
            if(s[i]!=c){
                cout << "1\n" << n << "\n";
                return;
            }
        }
        cout << "0\n";
    }
    else{
        if(s[n-2]!=c){
            for(ll i=n-3;2*i>n;i--){
                if(s[i]==c){
                    cout << "1\n" << i+1 << endl;
                    return;
                }
            }
            cout << "2\n" << n-1 << " " << n << "\n" ;
            
        }
        else{
            cout << "1\n" << n-1 << "\n";
        }
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
        cout << test << endl;
        solve();
    }
    return 0;
}