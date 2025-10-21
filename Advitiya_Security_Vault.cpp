#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n,0);
    int zero = 0;
    for(int i=0;i<n;i++){
        cin >> l[i];
        if(!l[i]) zero++;
    }
    int ans = 0;
    if(zero==n){
        ans+=(pow(k, zero)+pow(k, zero/2+(zero%2)))/2;
        cout << ans << endl;
        return;
    }
    int lock=0;
    int s=0, e=n-1;
    while(s<=e){
        if(l[s]!=l[e]){
            lock = 1;
            break;
        }
        s++;
        e--;

    }
    if(lock==1){
        ans=1;
        for(int i=0;i<zero;i++){
            ans = ans*(k%mod);
        }
        cout << ans << endl;
    }
    else{
        ans+=(pow(k, zero)+pow(k, zero/2+(zero%2)))/2;
        cout << ans << endl;
        return;
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
