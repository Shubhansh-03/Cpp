/*You are given an array a
 of length n
, consisting of positive integers, and an array x
 of length q
, also consisting of positive integers.

There are q
 modification. On the i
-th modification (1≤i≤q
), for each j
 (1≤j≤n
), such that aj
 is divisible by 2xi
, you add 2xi−1
 to aj
. Note that xi
 (1≤xi≤30
) is a positive integer not exceeding 30.

After all modification queries, you need to output the final array.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n
 and q
 (1≤n,q≤105
) —the length of the array a
 and the number of queries respectively.

The second line of each test case contains n
 integers a1,a2,a3,…,an
 — the elements of the array a
 (1≤ai≤109
).

The third line of each test case contains q
 integers x1,x2,x3,…,xq
 — the elements of the array x
 (1≤xi≤30
), which are the modification queries.

It is guaranteed that the sum of n
 and the sum of q
 across all test cases does not exceed 2⋅105
.

Output
For each test case, output the array after all of the modification queries.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> l(n);
    vector<ll> qu(q);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    for(int i=0;i<q;i++){
        cin >> qu[i];
    }

    ll perm = 31;
    for(int i=0;i<q;i++){
        if(qu[i]<perm){
            ll val = pow(2, qu[i]);
            for(int j=0;j<n;j++){
                if(l[j]%val==0){
                    l[j]+=val/2;
                }
            }
            perm = qu[i];
        }
    }
    for(int i=0;i<n;i++){
        cout << l[i] << " ";
    }
    cout << endl;

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