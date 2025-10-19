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
    string s;
    cin >> s;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        if(s[i] == 'a'){
            a.push_back(i);
        }
        else{
            b.push_back(i);
        }
    }
    if(a.size() == 0 || b.size() == 0){
        cout << 0 << endl;
        return;
    }
    int num = 0;
    int ans = LLONG_MAX-2;
    // for a
    // {
        int cost = 0;
        for(int i=0;i<a.size(); i++){
            cost += (a[i]-i);
        }
        // cout << "cost" << cost ;
        ans = min(ans, cost);
        num = 0;
        for(int i=a.size()-1;i>=0;i--){
            cost = cost - (a[i]-i) + (n-1 - a[i]- (a.size()-1 - i));
            ans = min(ans, cost);
        }
        cost = 0;
        for(int i=0;i<b.size(); i++){
            cost += (b[i]-i);
        }
        // cout << "cost" << cost ;
        ans = min(ans, cost);
        num = 0;
        for(int i=b.size()-1;i>=0;i--){
            cost = cost - (b[i]-i) + (n-1 - b[i]- (b.size()-1 - i));
            ans = min(ans, cost);
        }
    // }
    cout << ans << endl;
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