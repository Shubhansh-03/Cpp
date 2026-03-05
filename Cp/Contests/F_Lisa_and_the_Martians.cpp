#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int> (2));
    for(int i=0;i<n;i++){
        cin >> a[i][0];
        a[i][1] = i;
    }
    map<int, int> mp;
    int ind = -1;
    for(int i=0;i<n;i++){
        if(mp[a[i][0]]){
            ind = i;
            break;
        }
        mp[a[i][0]] = i+1;
    }
    int ans = 0;
    while(k--){
        ans = (ans<<1) + 1;
    }
    if(ind != -1){
        cout << mp[a[ind][0]] << " " << ind+1 << " " << ((a[ind][0])^(ans)) << endl;
    }
    else{
        sort(a.begin(), a.end());
        int ind = 0;
        int x = a[0][0] ^ a[1][0];
        for(int i=0;i<n-1;i++){
            int temp = a[i][0] ^ a[i+1][0];
            if(temp < x){
                x = temp;
                ind = i;
            }
        }
        // for(auto i: a) cout << i[0] << " ";
        x = a[ind][0] & a[ind+1][0];
        cout << a[ind][1]+1 << " " << a[ind+1][1]+1 << " " << (ans^(x)) << endl;
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
