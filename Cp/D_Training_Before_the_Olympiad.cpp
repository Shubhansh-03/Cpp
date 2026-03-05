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

    int even = 0, odd = 0;
    int pref = 0;
    for(int i=0;i<n;i++){
        if(l[i]%2){
            odd++;
        }
        else{
            even++;
        }
        pref += l[i];
        if(i == 0){
            cout << l[i] << " ";
        }
        else{
            if(odd == 1){
                cout << pref-1 << " ";
                continue;
            }
            else{
                int temp = odd/3;
                if(odd%3 == 1){
                    temp++;
                }
                cout << pref - temp << " ";
            }
        }
    }
    cout << endl;
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
