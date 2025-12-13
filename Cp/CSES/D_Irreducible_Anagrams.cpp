#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int n = s.size(), q = 0;
    cin >> q;
    vector<vector<int>> pref(n+1, vector<int> (26, 0));
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i];
        pref[i+1][s[i]-'a']++;
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == r){
            cout << "Yes\n";
            continue;
        }
        vector<int> nums;
        for(int i=0;i<26;i++){
            nums.push_back(pref[r][i]-pref[l-1][i]);
        }
        int count = 0;
        for(auto i: nums){
            if(i!=0) count++;
        }
        if(count == 1){
            cout << "No\n";
        }
        else if(count >= 3){
            cout << "Yes\n";
        }
        else{
            if(s[l-1]!=s[r-1]){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
    }
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
