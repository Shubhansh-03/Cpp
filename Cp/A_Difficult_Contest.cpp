/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string l;
    cin >> l;
    ll n = l.size();
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;

    for(int i=0;i<n;i++){
        if(l[i] == 'F' && !f1){
            f1 = 1;
        }
        else if(f1 && l[i] == 'F'){
            f2 = 1;
        }
        else if(f2 && l[i] == 'T'){
            l[i-1] = 'T';
            l[i] = 'F';
            f1 = 0;
            f2 = 0;
            i -= 2;
        }
        else{
            f1 = 0;
            f2 = 0;
        }

        if(l[i] == 'N' && !f4){
            f4 = 1;
        }
        else if(f4 && l[i] == 'T' && !f5){
            f5 = 1;
        }
        else if(f5 && l[i] == 'T'){
            // cout << "he1";
            l[i-2] = 'T';
            l[i-1] = 'N';
            f4 = 0;
            f5 = 0;
            i -= 5;
        }
        else{
            f4 = 0;
            f5 = 0;
        }
        // cout << l << endl;
    }
    cout << l << endl;
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