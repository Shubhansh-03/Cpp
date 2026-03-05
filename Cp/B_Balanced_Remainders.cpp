#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int a = 0, b = 0, c = 0;
    for(auto i: l){
        if(i%3 == 0){
            a++;
        }
        if(i%3 == 1){
            b++;
        }
        if(i%3 == 2){
            c++;
        }
    }
    int div = n/3;
    int ans = 0;
    ans += max(0ll, (a-div));
    b += max(0ll, (a-div));
    a = min(a, div);
    ans += max(0ll, (b-div));
    c += max(0ll, (b-div));
    b = min(b, div);
    ans += max(0ll, (c-div));
    a += max(0ll, (c-div));
    c = min(c, div);
    ans += max(0ll, (a-div));
    b += max(0ll, (a-div));
    a = min(a, div);
    ans += max(0ll, (b-div));
    c += max(0ll, (b-div));
    b = min(b, div);
    
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
