#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    map<int, int> m;

    int x = n;
    int big = 1<<n;
    vector<bool> vis(big, false);
    for(int x = n; x >= 1; x--){
        int num = (1 << x) - 1;
        if(!vis[num]){
            vis[num] = true;
            cout << num << " ";
            for(int i = 0; i < big; i++){
                if(!vis[i]){
                    if((i & num) == num){
                        vis[i] = true;
                        cout << i << " ";
                    }
                }
            }
        }
    }
    for(int i = 0; i < big; i++){
        if(!vis[i]){
            cout << i << " ";
        }
    }
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
