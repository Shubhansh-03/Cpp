/*You are given 3
 integers — n
, x
, y
. Let's call the score of a permutation†
 p1,…,pn
 the following value:

(p1⋅x+p2⋅x+…+p⌊nx⌋⋅x)−(p1⋅y+p2⋅y+…+p⌊ny⌋⋅y)

In other words, the score of a permutation is the sum of pi
 for all indices i
 divisible by x
, minus the sum of pi
 for all indices i
 divisible by y
.

You need to find the maximum possible score among all permutations of length n
.

For example, if n=7
, x=2
, y=3
, the maximum score is achieved by the permutation [2,6–,1–,7–,5,4––,3]
 and is equal to (6+7+4)−(1+4)=17−5=12
.

†
 A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in any order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (the number 2
 appears twice in the array) and [1,3,4]
 is also not a permutation (n=3
, but the array contains 4
).

Input
The first line of input contains an integer t
 (1≤t≤104
) — the number of test cases.

Then follows the description of each test case.

The only line of each test case description contains 3
 integers n
, x
, y
 (1≤n≤109
, 1≤x,y≤n
).

Output
For each test case, output a single integer — the maximum score among all permutations of length n
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll lcm = (x*y)/__gcd(x, y);
    ll ct1 = n/x - n/lcm;
    ll ct2 = n/y - n/lcm;
    ll add = ct1*(2*(n-ct1+1)+ct1-1)/2;
    ll sub = ct2*(2+ct2-1)/2;
    ll ans = add-sub;
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