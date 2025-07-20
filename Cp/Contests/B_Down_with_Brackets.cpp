/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    vector<char> l;
    l.push_back(s[0]);
    int t=0;
    ll n = s.size();
    int f1 = 0, f2 = 0;
    for(int i=1;i<n;i++){
        if(s[i]=='('){
            l.push_back(s[i]);
            t++;
            if(f1){
                cout << "YES\n";
                return;
            }
        }
        else{
            l.pop_back();
            t--;
        }
        if(l.size()==0){
            f1 = 1;
        }
    }
    cout << "NO\n";
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