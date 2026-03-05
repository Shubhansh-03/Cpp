#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    int ans = 0;
    int sq = sqrt(n);
    
    for(int i=1;i<=sq;i++){
        for(int j=0;j<n;j++){
            int z = j - i*a[j];
            if (z >= 0 && a[z] == i){
                ans++;
            }
        }
    }
    
    for(int i=1;i<=sq;i++){
        for(int j=0;j<n;j++){
            if (a[j] > sq){
                int x = j + a[j]*i;
                if (x < n && a[x] == i){
                    ans++;
                }
            }
        }
    }
    
    cout << ans << "\n";
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
