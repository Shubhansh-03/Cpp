#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1, 0);
    vector<int> b(n+1,0);
    for(int i=0;i<n;i++){
        cin>> a[i+1];
        b[a[i+1]] = i+1;
    }
    int f = 0;
    for(int i=1;i<=n;i++){
        if(i != a[i]){
            int pos = b[i];
            int x = max(pos, i) / min(pos, i);
            if((pos%i == 0 || i%pos == 0) && ((x)&(x-1))==0) continue;
            else{
                f = 1;
                break;
            }
        }
    }
    
    if(!f)cout << "YES\n";
    else cout << "NO\n";
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
