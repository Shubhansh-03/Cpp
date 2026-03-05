#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
const int N = 3e5+1;
vector<int> sieve(N, 1);
vector<int> prime(N);
void primes(){
    sieve[0] = 0;
    sieve[1] = 0;
    for(int i=2;i<N;i++){
        if(sieve[i]){
            prime[i] = i;
            for(int j=2;j*i<=N;j++){
                prime[i+j] = i;
                sieve[i] = 0;
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        m[t]++;
    }

    vector<int> ans(n+1, -1);
    if(m[1]){
        ans[1] = 1;
    }
    else{
        ans[1] = -1;
    }
    for(int i=2;i<n;i++){
        if(m[i]){
            ans[i] = 1;
        }
        else{
            if(!prime[i]){
                ans[i] = -1;
            }
            else{
                ans[i] = ans[prime[i]] + ans[i/prime[i]];
            }
        }
    }
    for(int i=1;i<=n;i++) cout << ans[i] << " ";
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
