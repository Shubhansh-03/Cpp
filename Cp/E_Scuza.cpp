/*Timur has a stairway with n
 steps. The i
-th step is ai
 meters higher than its predecessor. The first step is a1
 meters higher than the ground, and the ground starts at 0
 meters.

The stairs for the first test case.
Timur has q
 questions, each denoted by an integer k1,…,kq
. For each question ki
, you have to print the maximum possible height Timur can achieve by climbing the steps if his legs are of length ki
. Timur can only climb the j
-th step if his legs are of length at least aj
. In other words, ki≥aj
 for each step j
 climbed.

Note that you should answer each question independently.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains two integers n,q
 (1≤n,q≤2⋅105
) — the number of steps and the number of questions, respectively.

The second line of each test case contains n
 integers (1≤ai≤109
) — the height of the steps.

The third line of each test case contains q
 integers (0≤ki≤109
) — the numbers for each question.

It is guaranteed that the sum of n
 does not exceed 2⋅105
, and the sum of q
 does not exceed 2⋅105
.

Output
For each test case, output a single line containing q
 integers, the answer for each question.

Please note, that the answer for some questions won't fit into 32-bit integer type, so you should use at least 64-bit integer type in your programming language (like long long for C++).
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> l(n, vector<ll> (2));
    vector<ll> qu(q);
    for(ll i=0;i<n;i++){
        cin >> l[i][0];
        l[i][1] = i;
    }
    for(auto& i: qu){
        cin >> i;
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