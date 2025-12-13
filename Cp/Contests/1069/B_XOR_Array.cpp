#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> ans(n+1, 0);
    for(int i=1;i<=n;i++){
        if(i == r){
            ans[i] = l-1;
        }
        else{
            ans[i] = i;
        }
    }
    int p = 0;
    for(int i=1;i<=n;i++){
        cout << (ans[i]^ans[i-1]) << " ";
    }
    cout << "\n";
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