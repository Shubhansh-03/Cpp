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

    int f = 0;
    for(int i=1;i<n;i++){
        if(l[i] != l[i-1]){
            f = 1;
            break;
        }
    }
    if(!f){
        cout << "Yes\n";
        return;
    }
    f = 0;
    int num = -1;
    for(int i=0;i<n;i++){
        if(l[i]%10 != 0){
            f=1;
            break;
        }
    }
    if(!f){
        cout << "No\n";
        return;
    }
    f = 0;
    for(int i=0;i<n;i++){
        if(l[i] % 10 == 5){
            f = 1;
            num = l[i];
            break;
        }
    }
    if(f){
        f = 0;
        for(int i=0;i<n;i++){
            if(l[i] != num && l[i] != num+5){
                f = 1;
                break;
            }
        }
        if(f)
        cout << "No\n";
        else
        cout << "Yes\n";
        return;
    }   
    else{
        // cout << 
        int base = -1;
        int f = 0;
        for(int i=0;i<n;i++){
            if( (l[i]%10)==3 || l[i]%10==6 || l[i]%10==7 || l[i]%10==9){
                if(l[i]%10 == 3){
                    l[i] += 9;
                }
                else{
                    l[i] += l[i]%10;
                }
                // cout << l[i] << " ";
                int temp = (l[i]-(l[i]%10))%20;
                // cout << temp << " ";
                if(base == -1){
                    base = temp;
                }
                else{
                    if(temp != base){
                        f = 1;
                        break;
                    }
                }
            }
            else{
                int temp = (l[i]-(l[i]%10))%20;
                // cout << temp << " ";
                if(base == -1){
                    base = temp;
                }
                else{
                    if(temp != base){
                        f = 1;
                        break;
                    }
                }
            }
            // cout << base << " ";
        }
        if(f){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    for(int i=1;i<=test;i++)
    {
        // cout << "Case: " << i << " ";
        solve();
    }
    return 0;
}
