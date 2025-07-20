/*Danik urgently needs rock and lever! Obviously, the easiest way to get these things is to ask Hermit Lizard for them.

Hermit Lizard agreed to give Danik the lever. But to get a stone, Danik needs to solve the following task.

You are given a positive integer n
, and an array a
 of positive integers. The task is to calculate the number of such pairs (i,j)
 that i<j
 and ai
 &
 aj≥ai⊕aj
, where &
 denotes the bitwise AND operation, and ⊕
 denotes the bitwise XOR operation.

Danik has solved this task. But can you solve it?

Input
Each test contains multiple test cases.

The first line contains one positive integer t
 (1≤t≤10
) denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer n
 (1≤n≤105
) — length of the array.

The second line contains n
 positive integers ai
 (1≤ai≤109
) — elements of the array.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For every test case print one non-negative integer — the answer to the problem.
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
    sort(l.begin(), l.end());

    ll p = 1;
    ll two = 2;
    map<ll, ll> map;
    for(ll i=0;i<n;i++){
        while(two<=l[i] && p<32){
            p++;
            two = two<<1;
        }
        map[p]++;
    }
    ll ans = 0;
    for(ll i=0;i<32;i++){
        ans += map[i]*(map[i]-1)/2;
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