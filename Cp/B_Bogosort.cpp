/*You are given an array a1,a2,…,an
. Array is good if for each pair of indexes i<j
 the condition j−aj≠i−ai
 holds. Can you shuffle this array so that it becomes good? To shuffle an array means to reorder its elements arbitrarily (leaving the initial order is also an option).

For example, if a=[1,1,3,5]
, then shuffled arrays [1,3,5,1]
, [3,5,1,1]
 and [5,3,1,1]
 are good, but shuffled arrays [3,1,5,1]
, [1,1,3,5]
 and [1,1,5,3]
 aren't.

It's guaranteed that it's always possible to shuffle an array to meet this condition.

Input
The first line contains one integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains one integer n
 (1≤n≤100
) — the length of array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
).

Output
For each test case print the shuffled version of the array a
 which is good.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool compare(int a, int b){
    return a>b;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    sort(l.begin(), l.end(), compare);
    for(int i=0;i<n;i++){
        cout << l[i] << " ";
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