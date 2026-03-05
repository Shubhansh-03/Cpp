#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int total = (n*(n+1))/2;

    int count = __builtin_popcountll(n);
    if(count == 1){
        cout << -1 << endl;
        return;
    }

    a[n-1] = 1;
    for(int i=n-2;i>=1;i--){
        a[i] = (i+1)^1;
        total -= a[i];
    }
    total--;
    a[0] = total;
    for(auto i: a) cout << i << " ";
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
