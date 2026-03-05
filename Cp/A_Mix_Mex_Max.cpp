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
    int ans = 1;
    for(int i=0;i<n-2;i++){
        f = 0;
        int minn = 1e5, maxn = -199, mex = 0;
        vector<int> temp;
        for(int j=0;j<3;j++){
            temp.push_back(l[i+j]);
        }
        sort(temp.begin(), temp.end());
        if(temp[0] == -1 && temp[2] == -1){
            f = 1;
        }
        else if(temp[0] == -1 && temp[1] == -1){
            if(temp[2] != 0){
            f = 1;
            }
        }
        else if(temp[0] == -1){
            minn = temp[1];
            maxn = temp[2];
            if(minn == 0 && maxn == 1){
            f = 1;
            }
            else if(maxn - minn == 0){
                if(temp[1] != 0){
                    f = 1;
                }
            }
            else if(maxn - minn == 1){
            f = 1;
            }
            else if(maxn-minn==2){
                if(minn==0 && maxn ==2){
            f = 1;
                }
            }
        }
        else{
            minn = temp[0];
            maxn = temp[1];
            if(temp[0] == 0){
                mex=1;
                if(temp[1]==1){
                    mex++;
                    if(temp[2]==2){
                        mex++;
                    }
                }
            }
            if(mex == maxn-minn){
            f = 1;
            }
        }
        if(f!=1){
            ans = 0;
        }
    }
    if(ans == 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
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
    while(test--)
    {
        solve();
    }
    return 0;
}
