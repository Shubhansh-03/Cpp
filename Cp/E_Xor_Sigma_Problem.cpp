#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a) cin >> i;

    vector<vector<int>> bits(n, vector<int> (32, 0));
    for(int i=0;i<n;i++){
        int temp = a[i];
        int c = 0;
        while(temp!=0){
            bits[i][c++] = temp&1;
            temp>>=1;
        }
    }

    vector<vector<int>> suff(n+1, vector<int> (32, 0));
    for(int i=n-1;i>=0;i--){
        suff[i] = suff[]
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
