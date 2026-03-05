#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, h, l;
    cin >> n >> h >> l;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    int begin = 0, mid = 0;
    int minn = min(h, l), maxn = max(h, l);
    for(auto i: a){
        if(i <= minn){
            begin++;
        }
        else if(i <= maxn){
            mid++;
        }
    }
    int ans = min(mid, begin);
    mid -= ans;
    begin -= ans;

    ans += max(0ll, begin/2);
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
