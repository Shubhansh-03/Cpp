/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> l(n);
    for(auto& i: l){
        cin >> i;
    }

    vector<int> diff;
    for(int i=1;i<n;i++){
        diff.push_back(l[i]-l[i-1]-1);
    }
    sort(diff.begin(), diff.end());
    int ans = n;
    int cut = n;
    for(int i=0;i<n-1;i++){
        if(cut>k){
            ans += diff[i];
            cut--;
        }
        else{
            break;
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
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}