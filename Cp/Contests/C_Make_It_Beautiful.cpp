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
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    vector<vector<int>> bin(n, vector<int>(64, 0));
    ll ans = 0;
    for(ll i=0;i<n;i++){
        ll temp = l[i];
        ll cnt=0;
        while(temp!=0){
            bin[i][cnt] = temp&1;
            if(temp&1) ans++;
            cnt++;
            temp = temp>>1;
        }
    }
    ll cost = 1;
    for(int i=0;i<64;i++){
        // cout << k << " ";
        if(k<cost){
            break;
        }
        else{
            for(ll j=0;j<n;j++){
                if(bin[j][i]==0 && k>=cost){
                    ans++;
                    bin[j][i] = 1;
                    k -= cost;
                }
                else if(k<cost){
                    break;
                }
            }
        }
        cost = cost<<1; 
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