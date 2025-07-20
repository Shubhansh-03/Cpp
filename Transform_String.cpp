#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    // cout << "hehe";
    string s, p;
    cin >> s >> p;
    int i=0, j=0;
    int n = s.length();
    int m = p.length();
    map<char, int> dir1;
    // map<char, int> dir2;
    for(int i=0;i<n;i++){
        dir1[s[i]]++;
    }
    for(int i=0;i<m;i++){
        dir1[p[i]]--;
    }
    int rem = 0;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(dir1[s[i]]>0){
            dir1[s[i]]--;
            ans=ans + (ll)((ll)i+(ll)1+(ll)rem);
            rem--;
        }
        else if(dir1[s[i]]<0){
            cout << -1 << endl;
            return;
        }
    }
    for(int i=0;i<m;i++){
        if(dir1[p[i]]<0){
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
    // cout << ans << endl;
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