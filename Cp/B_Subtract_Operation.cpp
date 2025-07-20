/*You are given a list of n
 integers. You can perform the following operation: you choose an element x
 from the list, erase x
 from the list, and subtract the value of x
 from all the remaining elements. Thus, in one operation, the length of the list is decreased by exactly 1
.

Given an integer k
 (k>0
), find if there is some sequence of n−1
 operations such that, after applying the operations, the only remaining element of the list is equal to k
.

Input
The input consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (2≤n≤2⋅105
, 1≤k≤109
), the number of integers in the list, and the target value, respectively.

The second line of each test case contains the n
 integers of the list a1,a2,…,an
 (−109≤ai≤109
).

It is guaranteed that the sum of n
 over all test cases is not greater that 2⋅105
.

Output
For each test case, print YES if you can achieve k
 with a sequence of n−1
 operations. Otherwise, print NO.

You may print each letter in any case (for example, "YES", "Yes", "yes", "yEs" will all be recognized as a positive answer).
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> l(n);
    for(auto& i: l){
        cin >> i;
    }
    map<int, bool> map;
    for(int i=0;i<n;i++){
        map[l[i]] = true;
    } 

    for(int i=0; i<n; i++){
        if((map[k+l[i]] == true)){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO\n";
    
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