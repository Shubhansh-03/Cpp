#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int f = s[0]-'0';
    int z = 0, o = 0;
    if(f){
        o++;
    }
    else{
        z++;
    }
    int res1 = 0, res2 = 0;
    for(int i=1;i<n;i++){
        int t = s[i]-'0';
        if(t==f){
            if(f){
                o++;
            }
            else{
                z++;
            }
        }
        else{
            f = (f+1)%2;
            res1 += o+z-1;
            if(z>1 or o>1)
            res2 += (z*(z+1))/2 + ((o*(o+1))/2);
            o = 0;
            z = 0;
            if(f){
                o++;
            }
            else{
                z++;
            }
        }
    }
            res1 += max(o+z-1, 0ll);
            if(z>1 or o>1)
            res2 += (z*(z+1))/2 + ((o*(o+1))/2);
    cout << res1 << " " << res2 << endl;
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
