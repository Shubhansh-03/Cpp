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
    vector<int> l(n);
    for(auto &i: l){
        cin >> i;
    }
    sort(l.begin(), l.end());

    unordered_map<int, int> freq;
    int global_mex = 0;
    for(int i=0;i<n;i++){
        if(l[i] == global_mex){
            global_mex++;
        }
        freq[l[i]]++;
    }

    if(global_mex == n){
        int ans = n*(n-1)/2;
        cout << ans << endl;
        return;
    }
        if(global_mex > l[n-1]){
            if(k%2 == 0){
                int sum = accumulate(l.begin(), l.end(), 0);
                cout << sum << endl;
                return;
            }
            else{
                unordered_map<int, int> freq1;
                for(auto i: l){
                    freq1[i]++;
                }
                for(int i=0;i<n;i++){
                    if(freq1[l[i]] > 1){
                        l[i] = global_mex;
                    }
                }
                int sum = accumulate(l.begin(), l.end(), 0);
                cout << sum << endl;
                return;
            }
        }

    int st = 0;
    int mex2;
        int f = 0;
        for(int i=0;i<n;i++){
            if(freq[l[i]]>1){
                l[i] = global_mex;
                if(!f){
                    mex2 = l[i];
                }
                f = 1;
            }
            else{
                l[i] = min(l[i], global_mex);
            }
        }
        if(f == 0){
            mex2 = global_mex+1;
        }
        if(k==1){
            int sum = accumulate(l.begin(), l.end(), 0);
            cout << sum << endl;
            return;
        }
        if(mex2 > l[n-1]){
            k--;
            if(k%2 == 0){
                int sum = accumulate(l.begin(), l.end(), 0);
                cout << sum << endl;
                return;
            }
            else{
                unordered_map<int, int> freq1;
                for(auto i: l){
                    freq1[i]++;
                }
                for(int i=0;i<n;i++){
                    if(freq1[l[i]] > 1){
                        l[i] = mex2;
                    }
                }
                int sum = accumulate(l.begin(), l.end(), 0);
                cout << sum << endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                l[i] = min(mex2, l[i]);
            }
            k--;
            if(k%2 == 0){
                int sum = accumulate(l.begin(), l.end(), 0);
                cout << sum << endl;
                return;
            }
            else{
                unordered_map<int, int> freq1;
                for(auto i: l){
                    freq1[i]++;
                }
                for(int i=0;i<n;i++){
                    if(freq1[l[i]] > 1){
                        l[i] = mex2;
                    }
                }
                int sum = accumulate(l.begin(), l.end(), 0);
                cout << sum << endl;
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
    while(test--)
    {
        solve();
    }
    return 0;
}