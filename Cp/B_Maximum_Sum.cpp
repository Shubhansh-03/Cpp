/*You are given an array a1,a2,…,an
, where all elements are different.

You have to perform exactly k
 operations with it. During each operation, you do exactly one of the following two actions (you choose which to do yourself):

find two minimum elements in the array, and delete them;
find the maximum element in the array, and delete it.
You have to calculate the maximum possible sum of elements in the resulting array.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of two lines:

the first line contains two integers n
 and k
 (3≤n≤2⋅105
; 1≤k≤99999
; 2k<n
) — the number of elements and operations, respectively.
the second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
; all ai
 are different) — the elements of the array.
Additional constraint on the input: the sum of n
 does not exceed 2⋅105
.

Output
For each test case, print one integer — the maximum possible sum of elements in the resulting array.
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
    for(int i=0;i<n;i++){
        cin >> l[i];
    }    
    sort(l.begin(), l.end());
    ll sum = 0;
    for(int i=0;i<n-k;i++){
        sum+=l[i];
    }
    ll maxsum = sum;
    int s=0, e=n-k;
    while(e<n){
        sum = sum-l[s]-l[s+1];
        sum+=l[e];
        s+=2;
        e++;
        maxsum = max(maxsum, sum);
    }
    cout << maxsum << endl;

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