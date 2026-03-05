#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int check(int n){
    int ans = 0;
    while( (n&1) == 0){
        ans++;
        n = n>>1;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;
    int count = 0;
    for(auto i: l){
        count += check(i);
    }
    // cout << count << " ";
    vector<int> two; 
    for(int i=1;i<=n;i++){
        int temp = check(i);
        two.push_back(temp);
    }
    sort(two.begin(), two.end());
    int ans = 0;
    int i = two.size() -1;
    // for(auto i: two){
    //     cout << i << " ";
    // }
    while(count < n and i>=0){
        ans++;
        count += two[i];
        i--;
    }
    
    if(count < n){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
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
