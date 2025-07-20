/*For an array of integers [a1,a2,…,an]
, let's call the value |a1−a2|+|a2−a3|+⋯+|an−1−an|
 the contrast of the array. Note that the contrast of an array of size 1
 is equal to 0
.

You are given an array of integers a
. Your task is to build an array of b
 in such a way that all the following conditions are met:

b
 is not empty, i.e there is at least one element;
b
 is a subsequence of a
, i.e b
 can be produced by deleting some elements from a
 (maybe zero);
the contrast of b
 is equal to the contrast of a
.
What is the minimum possible size of the array b
?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤3⋅105
) — the size of the array a
.

The second line contains n
 integers a1,a2,⋅,an
 (0≤ai≤109
) — elements of the array itself.

The sum of n
 over all test cases doesn't exceed 3⋅105
.

Output
For each test case, print a single integer — the minimum possible size of the array b
.
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
    for (auto &i : l)
    {
        cin >> i;
    }
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    vector<ll> ans;
    ans.push_back(l[0]);
    ans.push_back(l[1]);
    for(int i=2;i<n;i++){
        int s = ans.size();
        int x = ans[s-1] - ans[s-2];
        int y = l[i] - ans[s-1];
        if(x>0){
            if(y>0) ans[s-1] = l[i];
            else if(y<0) ans.push_back(l[i]);
        }
        else{
            if(y<0) ans[s-1] = l[i];
            else if(y>0) ans.push_back(l[i]);
        }
    }
    ll s = ans.size();
    if(ans[0] == ans[1])
    {
        s--;
    }
    cout << s << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}