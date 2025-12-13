#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n, 0);
    int ans = 0;
    vector<int> curr, prev;
    string q = "";
    int count = 0;
    for(int i=1;i<n;i++){
        cout << "? " << i << " " << 1;
        cout.flush();
        int a; cin >> a;
        if(a)count++;
        ans[i] = a;
    }
    for(int i=0;i<n;i++){
        
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
