/*You are given two arrays a
 and b
 each consisting of n
 integers. All elements of a
 are pairwise distinct.

Find the number of ways to reorder a
 such that ai>bi
 for all 1≤i≤n
, modulo 109+7
.

Two ways of reordering are considered different if the resulting arrays are different.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of the array a
 and b
.

The second line of each test case contains n
 distinct integers a1
, a2
, …
, an
 (1≤ai≤109
) — the array a
. It is guaranteed that all elements of a
 are pairwise distinct.

The second line of each test case contains n
 integers b1
, b2
, …
, bn
 (1≤bi≤109
) — the array b
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the number of ways to reorder array a
 such that ai>bi
 for all 1≤i≤n
, modulo 109+7
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout << b[i] << " ";
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