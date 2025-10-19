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
    int b = 0, e = 18;
    int temp = n;
    int a = 0;
    while(temp>0){
        int b1 = b, e1 = e;
        int ans = b;
        while(b1<=e1){
            int mid = (b1+e1)/2;
            int num = pow(3, mid);
            if (num <= temp)
            {
                ans = mid;
                b1 = mid + 1;
            }
            else{
                e1 = mid - 1;
            }
        }
        // cout << ans << " ";
        temp -= pow(3, ans);
        e = ans;
        a += pow(3, ans+1) + ans*pow(3, ans-1);
    }
    cout << a << endl;

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