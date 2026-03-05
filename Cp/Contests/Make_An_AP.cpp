#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    if(n==1){
        cout << 0 << endl;
        return;
    }
    if(n==2){
        cout << 0 << endl;
        return;
    }
    int nd = l[n-1] - l[0];
    map<int, int> m;
    for(auto i: l) m[i]++;

    
    for(int i=n-1;i*i<=nd;i++){
        if(nd%i==0){
            int tempn = i;
            int tempd = (tempn)/i;
            int count = 0;
            for(int i=0;l[0]+i*tempd<=l[n-1];i++){
                if(m[l[0]+i*tempd]){
                    count++;
                }
            }
            if(count == n){
                cout << n-i+1 << endl;
                return;
            }
            cout << tempn << " " << tempd << " " ;
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
