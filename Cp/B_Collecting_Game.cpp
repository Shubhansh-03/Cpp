/*You are given an array a
 of n
 positive integers and a score. If your score is greater than or equal to ai
, then you can increase your score by ai
 and remove ai
 from the array.

For each index i
, output the maximum number of additional array elements that you can remove if you remove ai
 and then set your score to ai
. Note that the removal of ai
 should not be counted in the answer.

Input
Each test contains multiple test cases. The first line contains an integer t
 (1≤t≤5000
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤105
) — the length of the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output n
 integers, the i
-th of which denotes the maximum number of additional array elements that you can remove if you remove ai
 from the array and then set your score to ai
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    vector<int> d(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
        d[i] = l[i];
    }
    sort(d.begin(), d.end());
    map<int, int> map;
    ll sum = d[0];
    int g=0;
    int i=0;
    while(g<n){
        if(i<g){
            sum+=d[++i];
        }
        while(i<n-1 && sum>=d[i+1]){
            sum+=d[++i];
        }
        map[d[g++]] = i;
    }
    for(int j=0;j<n;j++){
        cout << map[l[j]] << " ";
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