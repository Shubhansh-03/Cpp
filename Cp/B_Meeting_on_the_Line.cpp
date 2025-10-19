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
    vector<vector<int>> l(n, vector<int> (2));
    for(int i=0;i<n;i++){
        cin >> l[i][0] >> l[i][1];
    }
    sort(l.begin(), l.end());

    double b = 0, e = 1e8;
    int c=0;
    while(b<e){
        double x0 = (e+b)/2;
        double leftt = 0, rightt = 0;
        for(int i=0;i<n;i++){
            if(l[i][0] < x0){
                leftt = max(leftt, (l[i][1]+abs(x0-(double)l[i][0])));
            }
            if(l[i][0] > x0){
                rightt = max(rightt, (l[i][1]+abs(x0-(double)l[i][0])));
            }
        }
        // cout << x0 << " " << leftt << " " << rightt << endl;
        if(leftt > rightt){
            e = x0;
        }
        else if(rightt > leftt){
            b = x0;
        }
        else{
            cout << x0 << endl;
            return;
        }
        if(c++ == 10000)return;
    }
    cout << (b+e)/2 << endl;
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