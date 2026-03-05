#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, ax, ay, bx, by;
    cin >> n >> ax >> ay >> bx >> by;
    vector<vector<int>> a(n, vector<int> (2, 0));
    for(auto& i: a) cin >> i[0];
    for(auto& i: a) cin >> i[1];

    sort(a.begin(), a.end());
    int prevx = ax, miny = ay, maxy = ay;
    for(int i=0;i<n;i++){
        if(a[i][0] == currx){
            
        }
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
