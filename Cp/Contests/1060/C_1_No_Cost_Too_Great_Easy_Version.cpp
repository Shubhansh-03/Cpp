#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

static vector<int> primes(2e5+2, 1);
static vector<int> prime;
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    vector<int> b(n);
    for(auto& i: b) cin >> i;

    int f = 0;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        for(auto nums: prime){
            if(nums*nums > l[i]) break;
            if(l[i]%nums == 0){
                m[nums]++;
                if(m[nums]>1){
                    f = 1;
                    break;
                }
            }
        }
        if(primes[l[i]]) {
            m[l[i]]++;
            if(m[l[i]]>1){
                // cout << l[i] << " ";
                f = 1;
                break;
            }
        }
        if(f) break;
    }

    if(f == 1){
        cout << 0 << endl;
        return;
    }
    for(int i=0;i<n;i++){
        for(auto nums: prime){
            if(nums*nums > (l[i]+1)) break;
            if((l[i]+1)%nums == 0){

                if(m[nums]>=1){
                    f = 1;
                    break;
                }
            }
        }
        if(primes[l[i]+1]){
            if(m[l[i]+1] >= 1){
                f = 1;
                break;
            }
        }
        if(f) break;
    }
    if(f){
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    primes[1] = 0;
    for(int i=2;i<=2e5;i++){
        if(primes[i]){
            prime.push_back(i);
            for(int j=2;i*j<2e5+1;j++){
                primes[i*j] = 0;
            }
        }
    }

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
