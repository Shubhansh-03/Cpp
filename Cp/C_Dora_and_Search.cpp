/*As you know, the girl Dora is always looking for something. This time she was given a permutation, and she wants to find such a subsegment of it that none of the elements at its ends is either the minimum or the maximum of the entire subsegment. More formally, you are asked to find the numbers l
 and r
 (1≤l≤r≤n)
 such that al≠min(al,al+1,…,ar)
, al≠max(al,al+1,…,ar)
 and ar≠min(al,al+1,…,ar)
, ar≠max(al,al+1,…,ar)
.

A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in any order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 occurs twice in the array) and [1,3,4]
 is also not a permutation (n=3
, but 4
 is present in the array).

Help Dora find such a subsegment, or tell her that such a subsegment does not exist.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Description of the test cases follows.

For each test case, the first line contains one integer n
 (1≤n≤2⋅105
) — the length of permutation.

The second line contains n
 distinct integers a1,a2,…,an
 (1≤ai≤n
) — the elements of permutation.

It is guarented that the sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, output −1
 if the desired subsegment does not exist.

Otherwise, output two indexes l,r
 such that [al,al+1,…,ar]
 satisfies all conditions.

If there are several solutions, then output any of them.
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
    for(auto& i: l){
        cin >> i;
    }
    ll si = 0, ei = n-1;
    ll s = 1, e = n;
    while(si<ei){
        if(l[si]==s){
            si++;
            s++;
        }
        else if(l[si]==e){
            si++;
            e--;
        }
        else if(l[ei]==s){
            ei--;
            s++;
        }
        else if(l[ei]==e){
            ei--;
            e--;
        }
        else{
            break;
        }
    }
    if(ei-si+1>2){
        cout << si+1 << " " << ei+1 << endl;
    }
    else{
        cout << -1 << endl;
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