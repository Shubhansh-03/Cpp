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
    vector<int> l(n);
    for(auto &i: l){
        cin >> i;
    }
    unordered_map<int, int> m;
    unordered_map<int, vector<int>> ind;
    int total = 0;
    for(int i=0;i<n;i++){
        m[l[i]]++;
        if(m[l[i]] % l[i] == 0){
            total += l[i];
        }
        ind[l[i]].push_back(i);
    }
    if(total != n){
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n);
    int count = 1;
    for(int i=1;i<=n;i++){
        int nums = ind[i].size();
        for(int j=0;j<nums;j++){
            ans[ind[i][j]] = count;
            if((j+1)%i == 0){
                count++;
            }
        }
    }
    for(auto i: ans){
        cout << i << " ";
    }
    cout << endl;

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