#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<vector<int>> l(n, vector<int> (2));

    for(auto& i: l){
        cin >> i[0] >> i[1];
    }

    vector<int> temp(2e5+2, 0);
    for(int i=0;i<n;i++){
        temp[l[i][0]]++;
        temp[l[i][1]+1]--;
    }

    for(int i=1;i<=2e5;i++){
        temp[i] += temp[i-1];
    }

    // for(int i=90;i<100;i++) cout << temp[i] << " ";
    vector<int> pref(2e5+2, 0);
    for(int i=0;i<=2e5;i++){
        pref[i+1] = pref[i]+(temp[i]>=k?1:0);
    }
    while(q--){
        int a, b;
        cin >> a >> b;
        cout << pref[b+1]-pref[a] << endl;
    }

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
