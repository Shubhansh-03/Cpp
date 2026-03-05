#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (2));
    for(int i=0;i<n;i++){
        cin >> a[i][0];
        a[i][1] = i;
    }
    map<int, int> dic;
    for(int i=0;i<n;i++){
        dic[i] = a[i][0];
    }
    sort(a.begin(), a.end());
    int r = n+1;
    for(int i=0;i<n;i++){
        if(a[i][0] <= m){
            r = n-i;
            dic[a[i][1]] = -1;
            if(i!=n-1 && dic[i+1] <= m){
                r--;
            }
            m -= a[i][0];
        }
        else{
            if(i!=n-1 && dic[i+1] <= m && dic[i+1] != -1){
                r--;
            }
            break;
        }
    }
    cout << r << endl;
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
