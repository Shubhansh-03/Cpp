/*You are given an array a1,a2,…,an
 of distinct positive integers. You have to do the following operation exactly once:

choose a positive integer k
;
for each i
 from 1
 to n
, replace ai
 with ai mod k†
.
Find a value of k
 such that 1≤k≤1018
 and the array a1,a2,…,an
 contains exactly 2
 distinct values at the end of the operation. It can be shown that, under the constraints of the problem, at least one such k
 always exists. If there are multiple solutions, you can print any of them.

†
 a mod b
 denotes the remainder after dividing a
 by b
. For example:

7 mod 3=1
 since 7=3⋅2+1
15 mod 4=3
 since 15=4⋅3+3
21 mod 1=0
 since 21=21⋅1+0
Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤1017
) — the initial state of the array. It is guaranteed that all the ai
 are distinct.

Note that there are no constraints on the sum of n
 over all test cases.

Output
For each test case, output a single integer: a value of k
 (1≤k≤1018
) such that the array a1,a2,…,an
 contains exactly 2
 distinct values at the end of the operation.
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
    ll ans = 2;
    for(ll i=1; i<62;i++){
        ll temp = l[0]%ans;
        for(ll j=1;j<n;j++){
            if(l[j]%ans!=temp){
                cout << ans << endl;
                return;
            }
        }
        ans = ans<<1;
    }
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