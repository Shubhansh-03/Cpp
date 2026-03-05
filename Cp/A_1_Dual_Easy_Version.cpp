#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int f = 0;
    int ind = 0;
    int maxn = -51;
    for(int i=0;i<n;i++){
        if(l[i] < 0){
            f = 1;
        }
        if(l[i] > maxn){
            maxn = l[i];
            ind = i;
        }
    }
    if(!f){
        cout << n-1 << endl;
        for(int i=1;i<n;i++){
            cout << i+1 << " " << i << endl;
        }
        return;
    }
    else if(maxn > 0){
        int ans = 2*n + 4;
        cout << ans << endl;
        for(int i=0;i<5;i++){
            cout << ind+1 << " " << ind+1 << endl;
        }
        for(int i=0;i<n;i++){
            cout << i+1 << " " << ind+1 << endl;
        }
        for(int i=1;i<n;i++){
            cout << i+1 << " " << i << endl;
        }
    }
    else{
        cout << n-1 << endl;
        for(int i=n;i>1;i--){
            cout << i-1 << " " << i << endl;
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
