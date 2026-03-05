#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(2*n);
    for(auto& i: l) cin >> i;
    sort(l.begin(), l.end());

    for(int i=0;i<n;i++){
        if(l[2*i] != l[2*i+1]){
            cout << "NO\n";
            return;
        }
        if(l[2*i]%2 || l[2*i+1]%2){
            cout << "NO\n";
            return;
        }
    }
    int sum = l[0]/2;
    int x = 0;
    for(int i=2;i<2*n;i+=2){
        x += x+(l[i]-l[i-2])/2;
    }
    if(sum-x >= 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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
