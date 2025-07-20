/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void recur(int n, int k, ll &count, int curr, vector<vector<ll>> &dp){
    if(k==0){
        count++;
        return;
    }
    for(int i=1; curr*i<=n; i++){
        recur(n, k-1, count, curr*i);
    }
}

/*
    k = 2 start = 1
    5 
    k = 3 start = 1
    k = 2 start = 1
    5
*/ 

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll count = 0;
    for(int i=1; i<=n;i++)
        recur(n, k-1, count, i);
    cout << count << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

class Hehe{
    int count = 0;
    void recur(int n, int k, int curr){
        if(k==0){
            count++;
            return;
        }
        for(int i=1;i*curr<=n; i++){
            recur(n, k, curr*i);
        }
    }
}