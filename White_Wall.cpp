#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<int>> l(3, vector<int> (3,0));
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            l[0][i%3]++;
        }
        else if(s[i]=='G'){
            l[1][i%3]++;
        }
        if(s[i]=='B'){
            l[2][i%3]++;
        }
    }
    int maxi=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(i==j || i==k || j==k) continue;
                maxi = max(maxi, l[0][i]+l[1][j]+l[2][k]);
            }
        }
    }
    int ans = n-maxi;
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
