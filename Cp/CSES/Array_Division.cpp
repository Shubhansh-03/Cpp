#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
bool check(vector<int>& l, int mid, int k){
    int sum = 0;
    int parts = 1;
    for(int i=0;i<l.size();i++){
        if(l[i] > mid){
            return false;
        }
        if(sum + l[i] > mid){
            parts++;
            sum = l[i];
        }
        else{
            sum += l[i];
        }
        if(parts > k){
            return false;
        }
    }
    return true;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int e = accumulate(l.begin(), l.end(), 0ll);
    int b = 0;
    int ans = -1;
    while(b <= e){
        int mid = (b+e)/2;
        int f = check(l, mid, k);
        if(f){
            ans = mid;
            e = mid-1;
        }
        else{
            b = mid+1;
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
