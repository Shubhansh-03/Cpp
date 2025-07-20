/*You are given a permutation p
 of integers from 0
 to n−1
 (each of them occurs exactly once). Initially, the permutation is not sorted (that is, pi>pi+1
 for at least one 1≤i≤n−1
).

The permutation is called X
-sortable for some non-negative integer X
 if it is possible to sort the permutation by performing the operation below some finite number of times:

Choose two indices i
 and j
 (1≤i<j≤n)
 such that pi&pj=X
.
Swap pi
 and pj
.
Here &
 denotes the bitwise AND operation.

Find the maximum value of X
 such that p
 is X
-sortable. It can be shown that there always exists some value of X
 such that p
 is X
-sortable.

Input
The input consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104)
  — the number of test cases. Description of test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤2⋅105)
  — the length of the permutation.

The second line of each test case contains n
 integers p1,p2,...,pn
 (0≤pi≤n−1
, all pi
 are distinct)  — the elements of p
. It is guaranteed that p
 is not sorted.

It is guaranteed that the sum of n
 over all cases does not exceed 2⋅105
.

Output
For each test case output a single integer — the maximum value of X
 such that p
 is X
-sortable.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<ll> d(n);
    int count=0;
    vector<ll> l(n);
    for(auto& i:l){
        cin >> i;
        d[count++] = i;
    }
    sort(d.begin(), d.end());
    int ans = -1;
    for(int i=0;i<n;i++){
        if(l[i]!=d[i]){
            if(ans==-1){
                ans = l[i];
            }
            else{
                ans = ans&l[i];
            }
        }
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