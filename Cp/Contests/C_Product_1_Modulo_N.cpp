#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> cop;
    cop.push_back(1);
    for(int i=2;i<n;i++){
        int x = gcd(i, n);
        if(x == 1) cop.push_back(i);
    }
    int prod = 1;
    for(auto i: cop){
        prod = (prod*i)%n;
    }
    if(prod == 1){
        cout << cop.size() << endl;
        for(auto i: cop) cout << i << " ";
    }
    else{
        cout << cop.size()-1 << endl;
        for(auto i: cop){
            if(i == prod) continue;
            cout << i << " ";
        }
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
