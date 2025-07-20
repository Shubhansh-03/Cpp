/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll s=0, e=n/2;
    ll sq = -1;
    if(n==1){
        cout << "0 1\n";
        return;
    }
    // cout << n;
    while(s<=e){
        ll num = (s+e)/2;
        ll squ = num*num;

        // cout << squ << " " << n << endl;
        if(squ==n){
            // cout << "hehe";
            sq = num;
            break;
        }
        else if(squ<n){
            s = num+1; 
        }
        else{
            e = num-1;
        }
    }
    if(sq!=-1){
        cout << 0 << " " << sq << endl;
    }
    else{
        cout << -1 << endl;
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