#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, p;
    cin >> n >> p;
    vector<int> l(n, 0);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    vector<int> ans(n, 0);
    int vol=0;
    int maxi =-1;
    for(int i=0;i<n;i++){
        if(l[i]==0){
            vol++;
            maxi=-1;
        }
        else if(vol==0){
            ans[i] = INT_MAX;
            continue;
        }
        else{
            maxi = max(maxi, l[i]/p+(l[i]%p>0));
            ans[i] = maxi;
        }
    }
    vol = 0;
    maxi=-1;
    for(int i=n-1;i>=0;i--){
        if(l[i]==0){
            vol++;
            maxi=-1;
        }
        else if(vol==0){
            continue;
        }
        else{
            maxi = max(maxi, l[i]/p+(l[i]%p>0));
            ans[i] = min(maxi, ans[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
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
