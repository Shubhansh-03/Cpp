#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

bool check(vector<int> l, int ind, int h){
    vector<int> t;
    for(int i=0;i<=ind;i++){
        t.push_back(l[i]);
    }
    sort(t.begin(), t.end());

    int height = 0;
    for(int i=ind;i>=0;i-=2){
        height += t[i];
    }
    if(height<=h){
        return true;
    }
    return false;
}
void solve()
{
    // cout << "hehe";
    int n, h;
    cin >> n >> h;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int b = 0, e = n-1;
    int ans = -1;
    while(b<=e){
        int mid = (b+e)/2;
        // bool poss = true;
        bool poss = check(l, mid, h);
        if(poss){
            ans = mid;
            b = mid+1;
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
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
