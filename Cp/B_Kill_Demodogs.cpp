/*Demodogs from the Upside-down have attacked Hawkins again. El wants to reach Mike and also kill as many Demodogs in the way as possible.

Hawkins can be represented as an n×n
 grid. The number of Demodogs in a cell at the i
-th row and the j
-th column is i⋅j
. El is at position (1,1)
 of the grid, and she has to reach (n,n)
 where she can find Mike.

The only directions she can move are the right (from (i,j)
 to (i,j+1)
) and the down (from (i,j)
 to (i+1,j)
). She can't go out of the grid, as there are doors to the Upside-down at the boundaries.

Calculate the maximum possible number of Demodogs ans
 she can kill on the way, considering that she kills all Demodogs in cells she visits (including starting and finishing cells).

Print 2022⋅ans
 modulo 109+7
. Modulo 109+7
 because the result can be too large and multiplied by 2022
 because we are never gonna see it again!

(Note, you firstly multiply by 2022
 and only after that take the remainder.)

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). Description of the test cases follows.

The first line of each test case contains one integer n
 (2≤n≤109
) — the size of the grid.

Output
For each test case, print a single integer — the maximum number of Demodogs that can be killed multiplied by 2022
, modulo 109+7
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll ans=((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
    cout<<ans<<endl;
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