/*Consider the points 0,1,…,n
 on the number line. There is a teleporter located on each of the points 1,2,…,n
. At point i
, you can do the following:

Move left one unit: it costs 1
 coin.
Move right one unit: it costs 1
 coin.
Use a teleporter at point i
, if it exists: it costs ai
 coins. As a result, you teleport to point 0
. Once you use a teleporter, you can't use it again.
You have c
 coins, and you start at point 0
. What's the most number of teleporters you can use?

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains two integers n
 and c
 (1≤n≤2⋅105
; 1≤c≤109
)  — the length of the array and the number of coins you have respectively.

The following line contains n
 space-separated integers a1,a2,…,an
 (1≤ai≤109
) — the costs to use the teleporters.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum number of teleporters you can use.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
        l[i] += i+1;
    }
    sort(l.begin(), l.end());
    int i = 0;
    ll sum = 0;
    while(i<n && sum<c){
        sum += l[i];
        i++;
    }
    if(sum>c){
        cout << i-1 << endl;
    }
    else{
        cout << i << endl;
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