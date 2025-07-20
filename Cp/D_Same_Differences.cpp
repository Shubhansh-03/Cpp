/*You are given an array a
 of n
 integers. Count the number of pairs of indices (i,j)
 such that i<j
 and aj−ai=j−i
.

Input
The first line contains one integer t
 (1≤t≤104
). Then t
 test cases follow.

The first line of each test case contains one integer n
 (1≤n≤2⋅105
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case output the number of pairs of indices (i,j)
 such that i<j
 and aj−ai=j−i
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    map<ll, ll> map;
    ll cnt = 1;
    vector<ll> final;
    for(ll i=0;i<n;i++){
        ll temp = l[i]-i;
        map[temp]++;
        if(map[temp]>1){
            cnt++;
        }
        if(map[temp]==1){
            final.push_back(temp);
        }
    }
    ll ans = 0;
    for(int i=0; i<final.size();i++){
        ll count = map[final[i]];
        ans += count*(count-1)/2;
    }
    cout << ans << endl;
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