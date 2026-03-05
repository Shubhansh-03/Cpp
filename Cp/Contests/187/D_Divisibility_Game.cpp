#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;

    vector<int> ans(n+m+1, 0);
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto [i, val]: mp){
        for(int j=i;j<=n+m;j+=i){
            ans[j]+=val;
        }
    }
    int alice = 0, both = 0, bob = 0;
    for(auto i: b){
        if(ans[i] == n){
            alice++;
        }
        else if(ans[i] == 0){
            bob++;
        }
        else{
            both++;
        }
    }
    alice += both/2 + both%2;
    bob += both/2;

    if(alice > bob){
        cout << "Alice\n";
    }
    else{
        cout << "Bob\n";
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
