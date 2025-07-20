#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    // cout << "hehe";
    int n;
    cin >> n;
    vector<int> l(n,0);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int ans;
    vector<int> beauty(n);
    int bb = 0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            bb = bb|l[i];
        }
        else{
            bb = bb&l[i];
        }
        beauty[i] = bb;
    } 
    int q;
    cin >> q;
    while(q--){
        int p, x;
        cin >> p >> x;
        l[p-1] = x;
        if(ans == x){
            cout << ans << endl;
        }
        else if(n%2==0){
            if(l[n-1]){
                ans = 1;
                cout << 1 << endl;
            }
            else

        }
        else
        {
            for(int i=n-1;i>=0;i--){
                if(i%2==0 && l[i]==1){
                    ans = 1;
                    cout << 1 << endl;
                    break;
                }
                else if(i%2==1 && l[i]==0){
                    ans = 0;
                    cout << 0 << endl;
                    break;
                }
                else if(i==0 && l[i]==0){
                    ans = 0;
                    cout << 0 << endl;
                    break;
                }
            }
        }
    }
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