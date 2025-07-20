/*You have a stripe of checkered paper of length n
. Each cell is either white or black.

What is the minimum number of cells that must be recolored from white to black in order to have a segment of k
 consecutive black cells on the stripe?

If the input data is such that a segment of k
 consecutive black cells already exists, then print 0.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

Next, descriptions of t
 test cases follow.

The first line of the input contains two integers n
 and k
 (1≤k≤n≤2⋅105
). The second line consists of the letters 'W' (white) and 'B' (black). The line length is n
.

It is guaranteed that the sum of values n
 does not exceed 2⋅105
.

Output
For each of t
 test cases print an integer — the minimum number of cells that need to be repainted from white to black in order to have a segment of k
 consecutive black cells.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
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