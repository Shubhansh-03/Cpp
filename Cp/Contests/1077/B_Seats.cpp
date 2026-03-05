#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int t = 0;

    for (int i=0;i<n;i++) {
        if(s[i] == '1'){
            t++;
        } 
        else{
            int f = 1;
            if(i > 0 && s[i - 1] == '1') f = 0;
            if(i < n - 1 && s[i + 1] == '1') f = 1;
            if(f){
                s[i] = '1';
                t++;
            }
        }
    }

    cout << t << endl;
}
// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int f = -1;
//     int count = 0;
//     int ans = 0;
//     if(n == 1){
//         cout << 1 << endl;
//         return;
//     }
//     for(auto i: s) if(i == '1') count++;
//     int i = -1;
//     f = -2;
//     while(i < n){
//         int next = i+1;
//         while(next < n){
//             if(s[next] == '1'){
//                 break;
//             }
//             next++;
//         }
//         if(next == n) next = n+1;
//         int zero = next - f - 1;
//         zero -= 2;
//         if(zero <= 0){
//             f = next;
//             i = next;
//             continue;
//         }
//         // cout << zero << " ";
//         int temp = (zero/6) * 2 + max((zero%6)/2, 1ll);
//         ans += temp;
//         f = next;
//         i = next;
//     }
//     cout << ans+count << endl;
// }
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
