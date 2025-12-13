#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int count(int n, int ind){
    for(int i=ind;i*i<n;i++){
        
    }
}
void solve()
{
    int n;
    cin >> n;

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    int ans = count(n, 2);
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
