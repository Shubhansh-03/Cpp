#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> l(n);
    vector<int> c(m);
    for(auto& i: l) cin >> i;
    for(auto& i: c) cin >> i;

    sort(l.begin(), l.end(), [](int a, int b){
        return a > b;
    });
    // for(auto i: l) cout << i << " ";
    
    int cnt = 0;
    int cost = 0;
    for(int i=0;i<n;i++){
        if(c[l[i]-1] > c[cnt] && cnt <= l[i]-1){
            cost += c[cnt];
            cnt++;
        }
        else{
            cost+=c[l[i]-1];
        }
    }
    cout << cost;
    cout << endl;
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
