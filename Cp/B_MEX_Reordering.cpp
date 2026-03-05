#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;
    sort(a.begin(), a.end());

    int mex = 0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i] == mex){
            mex++;
        }
        if(a[i] == 0){
            count++;
        }
    }
    if(mex >= 2){
        cout << "YES\n";
    }
    else if(mex == 0){
        cout << "NO\n";
    }
    else{
        if(count > 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
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
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
