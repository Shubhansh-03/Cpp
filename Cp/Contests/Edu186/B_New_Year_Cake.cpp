#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
bool check(int l, int a, int b){
    int even = l/2;
    int odd = l-even;
    int ce = (2*(pow(4, even)-1))/3;
    int co = (1*(pow(4, odd)-1))/3;
    // cout << ce << " " << co;
    if((a>=ce && b>=co) || (b>=ce && a>=co)){
        return true;
    }
        return false;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int s = 1, e = 100;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(check(mid, a, b)){
            // cout << mid << " ";
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
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
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
