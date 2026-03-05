#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<string> a(k);
    for(auto& i: a) cin >> i;
    if(k == 1){
        cout << a[0] << endl;
        return;
    }

    int b = 1, e = n;
    vector<int> fact;
    fact.push_back(1);
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            fact.push_back(i);
            if(i*i != n){
                fact.push_back(n/i);
            }
        }
    }
    sort(fact.begin(), fact.end());
    // fact.push_back(n);
    vector<vector<int>> mp(n, vector<int> (26, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            mp[i][a[j][i] - 'a'] = 1;
        }
    }
    for(auto i: fact){
        int f2 = 0;
        for(int ind=0;ind<i;ind++){
            int f1 = 0;
            for(int ch=0;ch<k;ch++){
                char c = a[ch][ind];
                int f = 0;
                for(int check = ind;check<n;check+=i){
                    if(!mp[check][c-'a']){
                        f = 1;
                        break;
                    }
                }                
                if(!f){
                    f1 = 1;
                    break;
                }
            }
            if(!f1){
                f2 = 1;
                break;
            }
        }
        if(!f2){
            string ans = "";
            for(int ind=0;ind<i;ind++){
                int f1 = 0;
                for(int ch=0;ch<k;ch++){
                    char c = a[ch][ind];
                    int f = 0;
                    for(int check = ind;check<n;check+=i){
                        if(!mp[check][c-'a']){
                            f = 1;
                            break;
                        }
                    }                
                    if(!f){
                        f1 = 1;
                        ans+=c;
                        break;
                    }
                }
            }
            int num = n/i;
            string print = "";
            for(int go = 0;go<num;go++){
                print += ans;
            }
            cout << print << endl;
            return;
        }
    }
    cout << a[0] << endl;
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
