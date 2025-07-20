/*You are given a square grid with n
 rows and n
 columns. Each cell contains either 0
 or 1
.

In an operation, you can select a cell of the grid and flip it (from 0→1
 or 1→0
). Find the minimum number of operations you need to obtain a square that remains the same when rotated 0∘
, 90∘
, 180∘
 and 270∘
.

The picture below shows an example of all rotations of a grid.


Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the size of the grid.

Then n
 lines follow, each with n
 characters ai,j
 (0≤ai,j≤1
) — the number written in each cell.

Output
For each test case output a single integer  — the minimum number of operations needed to make the square look the same rotated 0∘
, 90∘
, 180∘
 and 270∘
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> l(n, vector<ll> (n));
    for(ll i=0;i<n;i++){
        string s;
        cin >> s;
        for(ll j=0;j<n;j++){
            l[i][j] = (int)(s[j]-'0'); 
        }
    }
    ll ans = 0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            ll sum = l[i][j]+l[j][n-1-i]+l[n-1-i][n-1-j]+l[n-1-j][i];
            // ll sum = 0;
            ans += min(sum, 4-sum);
        }
    }
    ans = ans/4;
    cout << ans << endl;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}