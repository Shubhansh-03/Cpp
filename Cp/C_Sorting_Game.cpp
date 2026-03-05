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
    vector<int> z;
    vector<int> o;
    int f = 1;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            z.push_back(i);
        }
        else{
            o.push_back(i);
        }
        if(i>0 && (s[i] < s[i-1])){
            f = 0;
        }
    }
    if(f){
        cout << "Bob\n";
        return;
    }
    int count = z.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i<count){
            if(s[i]=='1') ans.push_back(i);
        } 
        else{
            if(s[i]=='0') ans.push_back(i);
        }
    }

    cout << "Alice\n" << ans.size() << endl;
    for(auto i : ans){
        cout << i+1 << " ";
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
