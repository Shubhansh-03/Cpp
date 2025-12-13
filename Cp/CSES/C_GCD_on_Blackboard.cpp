#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto &i: l) cin >> i;

    int N = *max_element(l.begin(), l.end());
    int sqr = (int)sqrt(N)+1;
    vector<int> sieve(sqr+1, 1);
    sieve[0] = 0;
    sieve[1] = 0;
    for(int i=2;i*i<=N;i++){
        if(sieve[i]){
            for(int j=i*i;j<=sqr;j+=i){
                sieve[j] = 0;
            }
        }
    }
    vector<int> primes;
    for(int i=0;i<=sqr;i++)
    {
        if(sieve[i]) primes.push_back(i);
    }

    for(auto i: primes) cout << i << " ";
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
