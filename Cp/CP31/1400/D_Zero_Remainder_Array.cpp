#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto &i: l) cin >> i;

    map<int, int> rem;
    for(int i=0;i<n;i++){
        if(l[i]%k!=0) rem[k-l[i]%k]++;
    }
    int maxans = 0;
    // for(auto i: rem) cout << i << " ";
    for(auto& [i, r]: rem){
        maxans = max(maxans, (r-1) * k + i);
    }
    cout << ((maxans==0)?0:(maxans+1)) << endl;
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
