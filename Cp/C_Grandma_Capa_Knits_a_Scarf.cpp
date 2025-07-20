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
    string s;
    cin >> s;
    map<char, ll> map;
    vector<char> uni;
    for(auto& i: s){
        map[i]++;
        if(map[i]==1){
            uni.push_back(i);
        }
    }
    ll ans = -1;
    for(auto i: uni){
        ll b=0, e=n-1;
        ll count = 0;
        while(b<e){
            if(s[b]==s[e]){
                b++;
                e--;
            }
            else if(s[b]==i || s[e]==i){
                if(s[b]==i) b++;
                else e--;
                count ++;
            }
            else{
                count = -1;
                break;
            }
        }
        if(count!=-1) {
            if(ans==-1) ans = count;
            else
            ans = min(ans, count);
            
        }
    }
    cout << ans << endl;
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