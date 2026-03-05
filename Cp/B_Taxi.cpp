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
    vector<int> num(5, 0);
    for(auto i: l){
        num[i]++;
    }
    int ans = num[4];
    ans += min(num[1], num[3]);
    int temp = min(num[1], num[3]);
    num[1] -= temp;
    num[3] -= temp;
    ans += num[2]/2;
    num[2]=num[2]%2;
    ans += num[3];
    num[3] = 0;
    if(num[2]){
        ans++;
        num[2] = 0;
        num[1]-=2;
    }
    if(num[1] > 0){
        ans += ceil(num[1]/4.0);
    }
    cout << ans << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
