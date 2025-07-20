/*You are given three integers n
, l
, and r
. You need to construct an array a1,a2,…,an
 (l≤ai≤r
) such that gcd(i,ai)
 are all distinct or report there's no solution.

Here gcd(x,y)
 denotes the greatest common divisor (GCD) of integers x
 and y
.

Input
The input consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line contains three integers n
, l
, r
 (1≤n≤105
, 1≤l≤r≤109
).

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, if there is no solution, print "NO" (without quotes). You can print letters in any case (upper or lower).

Otherwise, print "YES" (without quotes). In the next line, print n
 integers a1,a2,…,an
 — the array you construct.

If there are multiple solutions, you may output any.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> ans;
    for(int i=1;i<=n;i++){
        ll temp = ((l+i-1)/i)*i;
        if(temp>r){
            cout << "NO" << endl;
            return;
        }
        ans.push_back(temp);
    }
    cout << "YES" << endl;
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