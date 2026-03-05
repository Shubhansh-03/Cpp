#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> aa, ab, b(m);
    for(int i=0;i<n;i++){
        string temp;
        int t;
        cin >> temp >> t;
        if(temp == "ATK"){
            aa.push_back(t);
        }
        else{
            ab.push_back(t);
        }
    }
    for(auto& i: b) cin >> i;
    sort(aa.begin(), aa.end());
    sort(ab.begin(), ab.end());
    sort(b.begin(), b.end());

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
