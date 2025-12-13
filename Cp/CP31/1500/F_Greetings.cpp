#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> l(n, vector<int> (2));
    for(auto & i: l) cin >> i[0] >> i[1];

    vector<vector<int>> num(2*n, vector<int> (2));
    for(int i=0;i<n;i++){
        num[2*i][0] = l[i][0];
        num[2*i][1] = i;
        num[2*i+1][0] = l[i][1];
        num[2*i+1][0] = i;
    }

    sort(num.begin(), num.end());
    map<int, int> m;
    int start = 0, ans = 0;
    for(int i=0;i<2*n;i++){
        m[num[i][1]]++;
        if(m[num[i][1]] == 1){
            start++;
        }
        else{
            start--;
            ans+=start;
        }
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
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
