/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool compare(ll a, ll b){
    return a>b;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> l(m);
    for(auto& i: l){
        cin >> i;
    }
    sort(l.begin(), l.end());
    vector<ll> diff(m);
    for(int i=0;i<m-1;i++){
        diff[i] = l[i+1]-l[i]-1;
    }
    diff[m-1] = (n-l[m-1]+l[0]-1);
    sort(diff.begin(), diff.end(), compare);
    ll ans = 0;
    for(int i=0;i<m;i++){
        diff[i]-=4*i;
        if(diff[i]>0){
            ans++;
            diff[i]-=2;
            if(diff[i]>0){
                ans += (diff[i]);
            }
        }
    }
    cout << n-ans << endl;
    
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