#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, t, k;
    cin >> n >> t >> k;
    int b = 1, e = n;
    int need = k;
    int ans;
    while(b <= e){
        int mid = (b+e)/2;
        cout << "? " << b << " " << mid << '\n' << flush;
        int num;
        cin >> num;
        int z = mid-b+1 - num;
        if(z >= k){
            ans = mid;
            e = mid-1;
        }
        else if(z < k){
            k -= z;
            b = mid+1;
        }
    }
    cout << "! " << ans << flush;
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
