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
    map<int, int> x, y;
    for(int i=0;i<n-1;i++){
        int a, b;
        cin >> a >> b;
        if(x[a] == 0 && y[a] == 0){
            if(x[b] == 0 && y[b] == 0){
                x[a]++;
                y[b]++;
            }
            else if(x[b]!=0){
                x[b]++;
                y[a]++;
            }
            else{
                y[b]++;
                x[a]++;
            }
        }
        else if(x[a]!=0){
            x[a]++;
            y[b]++;
        }
        else{
            y[a]++;
            x[b]++;
        }
        for(auto pair: x) {
            if (pair.second > 0)
            cout << pair.first << " ";
        }
        // for(auto pair: y) cout << pair.first << " ";
        cout << endl;
    }
    int num = 0;
    for(auto& pair: x){
        if(pair.second > 0) num++;
    }
    int ans = 0;
    for(auto& pair: y){
        if(pair.second > 0)
        ans += (num-pair.second);
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
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}