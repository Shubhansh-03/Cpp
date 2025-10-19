/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto &i: l){
        cin >> i;
    }
    vector<vector<int>> pre(n+1, vector<int> (32,0));
    
    for(int i=0;i<n;i++){
        int temp = l[i];
        int c = 0;
        while(temp != 0){
            pre[i+1][c] = pre[i][c] + (int)(temp&1);
            c++;
            temp = temp >> 1;
        }
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int a, k;
        cin >> a >> k;
         
    }

}
int32_t main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}