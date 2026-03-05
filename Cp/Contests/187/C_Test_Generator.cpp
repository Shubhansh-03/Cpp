#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int s, m;
    cin >> s >> m;

    vector<int> a(64, 0);
    vector<int> b(64, 0);
    int bit = 0;
    int temp = s;
    while(s > 0){
        a[bit++] = s&1;
        s>>=1;
    }
    s = temp;
    bit = 0;
    temp = m;
    while(m > 0){
        b[bit++] = m&1;
        m>>=1;
    }
    m = temp;

    int f = 0;
    for(int i=0;i<64;i++){
        if(b[i]){f = 1; break;}
        if(!f && a[i]){
            cout << "-1" << endl;
            return;
        }
    }
    // vector<int> ans(64, 0);
    // for(int i=63;i>=0;i--){
    //     if(a[i]){
    //         int cnt = 1;
    //         int j = i;
    //         for(;j>=0;j--){
    //             if(b[j]) break;
    //             cnt *= 2;  
    //         }
    //         ans[j] += cnt;
    //         // i = j;
    //     }
    // }

    int l = 1, h = s; 
    int ans = -1;

    while(l <= h){
        int mid = l+(h-l)/2;
        
        int curr = s;
        for (int i = 62; i >= 0; i--) {
            if((m >> i) & 1){
                int temp = min(mid, curr >> i);
                curr -= temp*(1ll << i);
            }
        }

        if(curr == 0){
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1; 
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
