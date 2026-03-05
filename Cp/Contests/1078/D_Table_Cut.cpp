#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    int sum = 0;
    
    for(int i=0; i<n; i++){
        string temp = "";
        for(int i=0;i<m;i++){
            int t;
            cin >> t;
            temp += (char)('0'+t);
            if(t) sum++;
        }
        a[i] = temp;
    }
    int mid = sum / 2;
    int count = 0;
    int x, y;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(a[i][j] == '1') count++;
            if(count == mid){
                x = i;
                y = j;
            }
        }
    }
    int maxans = mid*(sum-mid);
    cout << maxans << endl;
    string ans = "";
    int cx = 0, cy=0;
    for(int i=0;i<x;i++){
        ans+='D';
        cx++;
    }
    for(int i=0;i<y;i++){
        ans+='R';
        cy++;
    }
    ans += 'D';
    cx++;
    for(int i=0;i<m-cy;i++){
        ans+='R';
    }
    for(int i=0;i<n-cx;i++){
        ans+='D';
    }
    cout << ans << endl;

}
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> a[i][j];
//         }
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += accumulate(a[i].begin(), a[i].end(), 0ll);
//     }
//     int mid = sum / 2;
//     int count = 0;
//     int x, y;
//     for(int i=0;i<n;i++){
//         for(int j=m-1;j>=0;j--){
//             if(a[i][j] == 1) count++;
//             if(count == mid){
//                 x = i;
//                 y = j;
//             }
//         }
//     }
//     int maxans = mid*(sum-mid);
//     cout << maxans << endl;
//     string ans = "";
//     int cx = 0, cy=0;
//     for(int i=0;i<x;i++){
//         ans+='D';
//         cx++;
//     }
//     for(int i=0;i<y;i++){
//         ans+='R';
//         cy++;
//     }
//     ans += 'D';
//     cx++;
//     for(int i=0;i<m-cy;i++){
//         ans+='R';
//     }
//     for(int i=0;i<n-cx;i++){
//         ans+='D';
//     }
//     cout << ans << endl;

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
