#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int nsum = accumulate(l.begin(), l.end(), 0ll);
    int b = 0, e = -1;
    int sum = 0;
    int maxsum = INT_MIN;
    int f = 0;
    for(int i=0;i<n;i++){
        if(sum+l[i]>0){
            sum+=l[i];
        }
        else{
            sum = 0;
            f = 1;
        }
        maxsum = max(maxsum, sum);
        if(maxsum>=nsum){
            if(i==n-1 && f==0 && maxsum==nsum){
                break;
            }
            else
            {cout << "NO\n";
            return;}
        }
    }
    cout << "YES\n";
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
