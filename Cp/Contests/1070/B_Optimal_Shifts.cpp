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

    int ans = 0;
    int r = 0;
    while(s[r] == '0'){
        r++;
    }
    // for(;first<n;first++){
    //     if(s[first] == '1') break;
    // }
    int count = r;
    int c = 0;
    for(int i=count;i<n;i++){
        if(s[i] == '1'){
            ans = max(ans, c);
            c = 0;
        }
        else{
            c++;
        }
    }


    ans = max(ans, c+count);
    cout << ans  << endl;
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
