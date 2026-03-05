#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
bool check(vector<int>& l, int mid, int k){
    int sum = 0;
    for(int i=0;i<l.size();i++){
        sum += mid/l[i];
        if(sum >= k){
            return true;
        }
    }
    return false;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto& i: l) cin >> i;
    // sort(l.begin(), l.end());

    int b = 0, e = LLONG_MAX;
    int ans = -1;
    while(b <= e){
        int mid = (b+e)/2;
        bool f = check(l, mid, k);
        if(f){
            ans = mid;
            e = mid-1;
        }
        else{
            b = mid + 1;
        }

    }
    cout << ans;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
