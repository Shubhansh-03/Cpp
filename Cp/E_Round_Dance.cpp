#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int scom = 0, xcom = 0;
    vector<int> vis(n+1, 0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            vis[i] = 1;
            int count = 1;
            int ind = i;
            while(!vis[a[ind]]){
                count++;
                vis[ind] = 1;
                ind = a[ind];
            }
            vis[ind] = 1;
            if(ind!=i || count == 2){
                scom++;
            }
            else{
                xcom++;
            }
        }
    }
    cout << xcom+((scom>0) ? 1 : 0) << " " << xcom + scom << endl;
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
