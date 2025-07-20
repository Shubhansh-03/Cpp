#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void perms(string s, vector<string> &ans, string permu, vector<int> chosen){
    if(permu.size() == s.size()){
        ans.push_back(permu);
        return ; 
    }

    for(int i=0;i<s.size();i++){
        if(chosen[i]==0){
            chosen[i] = 1;
            // permu+=s[i];
            perms(s, ans, permu+s[i], chosen);
            chosen[i] = 0;
            // permu.pop_back();
        }
    }

}
void solve(){
    string s = "abc";
    vector<int> chosen(s.size(), 0);
    string permu;
    vector<string> ans;

    perms(s, ans, permu, chosen);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}