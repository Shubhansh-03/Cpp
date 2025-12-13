#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, a;
    cin >> n >> a;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int count = 0, count2 = 0;

    for(int i=0;i<n;i++){
        if(l[i] < a) count++;
        if(l[i] > a) count2++;
    }
    if(count > count2){
        cout << a-1 << endl;
    }
    else{
        cout << a+1 << endl;
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
