#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> l(n, vector<int> (2));
    for(auto &i: l) cin >> i[0] >> i[1];
    // cerr << "h";

    vector<int> val(2*n);
    for(int i=0;i<n;i++){
        val[2*i] = l[i][0];
        val[2*i+1] = l[i][1];
    }
    sort(val.begin(), val.end());
    map<int, int> m;
    for(int i=0;i<2*n;i++){
        m[val[i]] = i+1;
    }
    for(auto &i: l){
        i[0] = m[i[0]];
        i[1] = m[i[1]];
    }
    vector<int> nums(4e5+100, 0);
    for(auto i: l){
        nums[i[0]] += 1;
        nums[i[1]+1] -= 1;
    }
    int maxn = -1;
    for(int i=1;i<4e5+100;i++){
        nums[i] += nums[i-1];
        maxn = max(maxn, nums[i]);
    }
    cout << maxn << endl;
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
