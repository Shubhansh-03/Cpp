/*
*/
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
    int ab = 1, ae = n;
    int ans;
    while(ab <= ae){
        int mid = (ab+ae)/2;
        int score = 0;
        int oz=0, o=0, part = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                o++;
                oz = max(o, oz);
            }
            else{
                oz++;
            }
            if(oz>=mid){
                oz = 0;
                o = 0;
                part++;
            }
        }
        if(part>=k){
            ab = mid+1;
            ans = mid;
        }
        else{
            ae = mid-1;
        }
    }
    cout << ans << '\n';
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