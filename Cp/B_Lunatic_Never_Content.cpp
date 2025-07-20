/*You have an array a
 of n
 non-negative integers. Let's define f(a,x)=[a1modx,a2modx,…,anmodx]
 for some positive integer x
. Find the biggest x
, such that f(a,x)
 is a palindrome.

Here, amodx
 is the remainder of the integer division of a
 by x
.

An array is a palindrome if it reads the same backward as forward. More formally, an array a
 of length n
 is a palindrome if for every i
 (1≤i≤n
) ai=an−i+1
.

Input
The first line contains a single integer t
 (1≤t≤105
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤105
).

The second line of each test case contains n
 integers ai
 (0≤ai≤109
).

It's guaranteed that the sum of all n
 does not exceed 105
.

Output
For each test case output the biggest x
, such that f(a,x)
 is a palindrome. If x
 can be infinitely large, output 0
 instead.
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
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    ll ans = 0;
    for(int i=0;i<=n/2;i++){
        ans = __gcd(ans, abs(l[i]-l[n-i-1]));
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