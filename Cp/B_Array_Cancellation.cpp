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

    int sum = 0;
    for(auto i: l){
        sum += abs(i);
    }
    int neg = 0, pos = 0;
    int ans = sum/2;
    for(int i=n-1;i>=0;i--){
        if(l[i] < 0){
            neg += abs(l[i]);
        }
        if(l[i] > 0 and neg>0){
            pos += abs(l[i]);
        }
        // cout << ans << " ";
        if(neg > 0){
            int temp = min(neg, pos); 
            ans -= temp;
            neg -= temp;
            pos = 0;
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
