/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<vector<char>> l(q, vector<char> (2));
    ll ca = 0, ba = 0, cb = 0, bc=0;
    for(auto& i: l){
        cin >> i[0] >> i[1];
        if(i[0]=='c'){
            if(i[1] == 'a'){
                ca++;
            }
            else if(i[1]=='b')
                cb++;
        }
        else if(i[0]=='b'){
            if(i[1]=='a'){
                ba++;
            }
            else if(i[1]=='c' && ba>bc){
                bc++;
            }
        }
    }
    
    for(ll i=0;i<n;i++){
        if(s[i]=='c' && (ca || cb)){
            if(ca){
                s[i] = 'a';
                ca--;
            }
            else if(cb && ba){
                s[i] = 'a';
                cb--;
                ba--;
            }
            else if(cb){
                s[i] = 'b';
                cb--;
            }
        }
        else if(s[i]=='b' && (ba || (bc && ca))){
            if(ba){
            s[i] = 'a';
            ba--;
            }
            else if(bc && ca){
                s[i] = 'a';
                bc--;
                ca--;
            }
        }
    }
    cout << s << "\n";


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