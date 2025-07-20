/*Aou're given an array b
 of length n
. Let's define another array a
, also of length n
, for which ai=2bi
 (1≤i≤n
).

Valerii says that every two non-intersecting subarrays of a
have different sums of elements. You want to determine if she is wrong. More formally, you need to determine if there exist four integersl1,r1,l2,r2
 that satisfy the following conditions:

1≤l1≤r1<l2≤r2≤n
;
al1+al1+1+…+ar1−1+ar1=al2+al2+1+…+ar2−1+ar2
.
If such four integers exist, you will prove Valerii wrong. Do they exist?

An array c
 is a subarray of an array d
 if c
 can be obtained from d
 by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). Description of the test cases follows.

The first line of every test case contains a single integer n
 (2≤n≤1000
).

The second line of every test case contains n
 integers b1,b2,…,bn
 (0≤bi≤109
).

Output
For every test case, if there exist two non-intersecting subarrays in a
 that have the same sum, output YES on a separate line. Otherwise, output NO on a separate line.

Also, note that each letter can be in any case.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<ll> l(n);
    map<int, int> map;
    int f=0;
    for(int i=0;i<n;i++){
        cin >> l[i];
        map[l[i]]++;
        if(map[l[i]]>1){
            f=1;
        }
    }
    if(f){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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