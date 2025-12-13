#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

bool check(int ind, vector<int> q, vector<int> r, int k){
    int cnt = 0;
    for(int i=ind;i>=0;i--){
        int a = r[i]+1;
        int b = q[cnt++]*(a);
        if((r[i]+b) > k){
            return false;
        }
    }
    return true;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> q(n);
    vector<int> r(n);
    for(auto& i: q) cin >> i; 
    for(auto& i: r) cin >> i; 

    sort(q.begin(), q.end());
    sort(r.begin(), r.end());

    int b = 0, e = n-1;
    int ans = -1;
    while(b<=e){
        int mid = (b+e)/2;
        bool f = check(mid, q, r, k);
        if(f){
            ans = mid;
            b = mid + 1;
        }
        else{
            e = mid-1;
        }
    }
    cout << ans+1 << endl;

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
