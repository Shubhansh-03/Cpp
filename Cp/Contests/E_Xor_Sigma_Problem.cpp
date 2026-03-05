#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;
    vector<vector<int>> bits(n, vector<int> (64, 0));
    for(int i=0;i<n;i++){
        int t = a[i];
        for(int j=0;j<64;j++){
            bits[i][j] = t&1;
            t>>=1;
        }
    }

    int ans = 0;
    int curr = 1;
    for(int i=0;i<64;i++){
        int even = 0, odd = 0;
        int sum = 0;
        int ones = 0;
        for(int j=0;j<n;j++){
            if(bits[j][i]){
                int temp = even + 1;
                even = odd; 
                odd = temp;
                ones++;
            }
            else{
                even += 1;
            }
            sum += odd;
        }
        sum -= ones;
        ans += curr*sum;
        curr <<= 1;
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
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
