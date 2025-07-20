/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll b=0, e=n-1;
    ll zp=0, op=0, np=0;
    while(b<e){
        if(s[b]==s[e] ){
            if(s[b]=='0'){
                zp++;
            }
            else if(s[b]=='1'){
                op++;
            }
        }
        else{
            np++;
        }
        b++;
        e--;
    }
    if(zp+op==k){
        cout << "YES\n";
    }
    else if(k>(zp+op) && (k-zp-op)<=np && (k-zp-op)%2==0){
        cout << "YES\n";
    }
    else if(k<(zp+op) && (op+zp-k)%2==0 && 2*min(op, zp)>=(op+zp-k)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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