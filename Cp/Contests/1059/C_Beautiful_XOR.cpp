/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int a, b;
    cin >> a >> b;
    if(b>a){
        cout << -1 << endl;
        return;
    }
    if(a == b){
        cout << 0 << endl;
        return;
    }

    int ans = a^b;
    if(ans > a){
        int count = 0;
        vector<int> l;
        int x = 1;
        while(x<=a){
            int num = (a^b)&x;
            count++;
            l.push_back(num);
            x = x<<1;
        }
        cout << count << endl;
        for(auto i: l) cout << i << " ";
        cout << endl;
    }
    else{
        cout << 1 << "\n" << ans << endl;
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