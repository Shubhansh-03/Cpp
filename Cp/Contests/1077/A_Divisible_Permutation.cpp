#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    ans[n-1] = n;
    ans[n-2] = 1;
    int e = n-1, b = 2;
    int f = 0;
    for(int i=n-3;i>=0;i--){
        if(f){
            ans[i] = b++;
        }
        else{
            ans[i] = e--;
        }
        f = (f+1)%2;
    }
    for(auto i: ans) cout << i << " ";
    cout << endl;
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
