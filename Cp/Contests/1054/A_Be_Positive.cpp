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
    int neg = 0;
    int zer = 0;
    for(auto &i: l){
        cin >> i;
        if(i==0){
            zer++;
        }
        if(i==-1){
            neg++;
        }
    }
    if(neg%2==0){
        cout << zer << endl;
    }
    else{
        cout << 2+zer << endl;
    }

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