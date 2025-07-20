/*Flower boy has a garden of n
 flowers that can be represented as an integer sequence a1,a2,…,an
, where ai
 is the beauty of the i
-th flower from the left.

Igor wants to collect exactly m
 flowers. To do so, he will walk the garden from left to right and choose whether to collect the flower at his current position. The i
-th flower he collects must have a beauty of at least bi
.

Igor noticed that it might be impossible to collect m
 flowers that satisfy his beauty requirements, so before he starts collecting flowers, he can pick any integer k
 and use his magic wand to grow a new flower with beauty k
 and place it anywhere in the garden (between two flowers, before the first flower, or after the last flower). Because his magic abilities are limited, he may do this at most once.

Output the minimum integer k
 Igor must pick when he performs the aforementioned operation to ensure that he can collect m
 flowers. If he can collect m
 flowers without using the operation, output 0
. If it is impossible to collect m
 flowers despite using the operation, output −1
.

Input
The first line of the input contains a single integer t
 (1≤t≤104)
 — the number of test cases.

The first line of each test case contains exactly two integers n
 and m
 (1≤m≤n≤2⋅105)
 — the number of flowers in the garden and the number of flowers Igor wants to collect, respectively.

The second line of each test case contains n
 integers a1,a2,...,an
 (1≤ai≤109)
 — where ai
 is the beauty of the i
-th flower from the left in the garden.

The third line of each test case contains m
 integers b1,b2,...,bm
 (1≤bi≤109)
 — where bi
 is the minimum beauty the i
-th flower must have that Igor will collect.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, on a separate line, output the minimum integer k
 Igor must pick when he performs the aforementioned operation to ensure that he can collect m
 flowers. If he can collect m
 flowers without using the operation, output 0
. If it is impossible to collect m
 flowers despite using the operation, output −1
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
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