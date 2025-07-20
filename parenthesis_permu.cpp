#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void rec(vector<string> &ans, int n, int n1, int n2, string s){
    if(n==n1){
        for(int i=n2; i<n;i++){
            s+=')';
        }
        ans.push_back(s);
        return;
    }

    // for(int i=n1;i<n;i++){
        s+='(';
        rec(ans, n, n1+1, n2, s);
        s+=')';
        rec(ans, n, n1+1, n2+1, s);
    // }
}
void solve()
{
    int n;
    cin >> n;
    vector<string> ans;
    rec(ans, n, 0, 0, "");
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