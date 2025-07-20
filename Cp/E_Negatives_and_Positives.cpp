/*Given an array a
 consisting of n
 elements, find the maximum possible sum the array can have after performing the following operation any number of times:

Choose 2
 adjacent elements and flip both of their signs. In other words choose an index i
 such that 1≤i≤n−1
 and assign ai=−ai
 and ai+1=−ai+1
.
Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
) — the length of the array.

The following line contains n
 space-separated integers a1,a2,…,an
 (−109≤ai≤109
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum possible sum the array can have after performing the described operation any number of times.
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
    int neg = 0;
    ll sum = 0;
    ll minnum = INT_MAX;
    for(auto& i: l){
        cin >> i;
        if(i<0){
            neg++;
        }
        sum+=abs(i);
        minnum = min(minnum, abs(i));
    }
    if(neg%2==0){
        cout << sum << endl;
    }
    else{
        cout << sum-2*minnum << endl;
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