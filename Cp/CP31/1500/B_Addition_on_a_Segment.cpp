#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto &i: l) cin >> i;

    sort(l.begin(), l.end());
    int z = 0, o = 0;
    for(auto i: l){
        if(i == 0){
            z++;
        }
        if(i==1){
            o++;
        }
    }
    int sum = accumulate(l.begin(), l.end(), 0ll);
    for(int i=n-z;i>=0;i--){
        if(sum-i >= n-1){
            cout << i << endl;
            return;
        }
    }
    cout << 0 << endl;
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
