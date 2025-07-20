/*We define an integer to be the most common on a subsegment, if its number of occurrences on that subsegment is larger than the number of occurrences of any other integer in that subsegment. A subsegment of an array is a consecutive segment of elements in the array a
.

Given an array a
 of size n
, and an integer k
, determine if there exists a non-empty subsegment of a
 where k
 is the most common element.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases. The description of test cases follows.

The first line of each test case contains two integers n
 and k
 (1≤n≤100
, 1≤k≤100
) — the number of elements in array and the element which must be the most common.

The second line of each test case contains n
 integers a1
, a2
, a3
, …
, an
 (1≤ai≤100
) — elements of the array.

Output
For each test case output "YES" if there exists a subsegment in which k
 is the most common element, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as a positive answer)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    int f=0;
    for(int i=0;i<n;i++){
        cin >> l[i];
        if(l[i]==k) f=1;
    }
    if(f){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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