#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int num = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(i-k>=0){
            if(s[i-k]=='1'){
                num--;
            }
        }
        if(s[i]=='1' && num==0){
            ans++;
            num++;
        }
        else if(s[i]=='1'){
            num++;
        }
    }
    cout << ans << endl;
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
