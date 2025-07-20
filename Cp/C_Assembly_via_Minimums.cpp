/*Sasha has an array a
 of n
 integers. He got bored and for all i
, j
 (i<j
), he wrote down the minimum value of ai
 and aj
. He obtained a new array b
 of size n⋅(n−1)2
.

For example, if a=
 [2,3,5,1
], he would write [min(2,3),min(2,5),min(2,1),min(3,5),min(3,1),min(5,1)
] =
 [2,2,1,3,1,1
].

Then, he randomly shuffled all the elements of the array b
.

Unfortunately, he forgot the array a
, and your task is to restore any possible array a
 from which the array b
 could have been obtained.

The elements of array a
 should be in the range [−109,109]
.

Input
The first line contains a single integer t
 (1≤t≤200
) — the number of test cases.

The first line of each test case contains a single integer n
 (2≤n≤103
) — the length of array a
.

The second line of each test case contains n⋅(n−1)2
 integers b1,b2,…,bn⋅(n−1)2
 (−109≤bi≤109
) — the elements of array b
.

It is guaranteed that the sum of n
 over all tests does not exceed 103
 and for each array b
 in the test, there exists an original array.

Output
For each test case, output any possible array a
 of length n
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
    vector<ll> l(n*(n-1)/2);
    for(auto& i: l){
        cin >> i;
    }
    sort(l.begin(), l.end());

    ll ct = n-1;
    ll c = ct;
    vector<ll> ans;

    for(ll i=0;i<l.size();i++){
        c--;
        if(c == 0){
            ans.push_back(l[i]);
            ct--;
            c = ct;
        }
          
    }
    // ans.push_
    ans.push_back(l[l.size()-1]);
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
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