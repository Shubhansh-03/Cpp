#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int o = 0, z = 0;
    for(auto i: s){
        if(i == '1') o++;
        else z++;
    }
    vector<int> l(n, -1);

    int minz = 0, maxz = 0;
    for(int i = 0; i < k; i++) {
        int len = (n-1-i)/k+1;
        minz += len / 2;
        maxz += (len + 1) / 2;
    }
    if(z>=minz && z<=maxz)
    cout << "Yes\n";
    else
    cout << "No\n";
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
