/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l){
        cin >> i;
    }    
    int prev = l[0];
    vector<int> p;
    p.push_back(0);
    for(int i=1;i<n;i++){
        if(l[i] != prev){
            p.push_back(i);
            prev = l[i];
        }
        else{
            p.push_back(p[p.size()-1]);
        }
    }
    // for(auto i: p){
    //     cout << i << " ";
    // }
    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        auto it = lower_bound(p.begin()+a, p.begin()+b, p[a-1]+1);
        if(it >= p.begin()+b){
            cout << "-1 -1\n";
        }
        else{
            cout << a << " " << *it + 1 << endl;
        }
    }
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