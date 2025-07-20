/*You are given an array of integers a1,a2,…,an
 and a number k
 (2≤k≤5
). In one operation, you can do the following:

Choose an index 1≤i≤n
,
Set ai=ai+1
.
Find the minimum number of operations needed to make the product of all the numbers in the array a1⋅a2⋅…⋅an
 divisible by k
.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Then follows the description of the test cases.

The first line of each test case contains two integers n
 and k
 (2≤n≤105
, 2≤k≤5
) — the size of the array a
 and the number k
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤10
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the minimum number of operations needed to make the product of all the numbers in the array divisible by k
.
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

    if(k==4) {
        int cnt=0;
        int trip=0;
        for(int i=0;i<n;i++) {
            if(l[i]%2==0) {
                cnt++;
            }
            if(l[i]%4==0) {
                cout<<0<<endl;
                return;
            }
            if(l[i]%4==3){
                trip=1;
            }
        }
        if(cnt>=2) {
            cout<<0<<endl;
            return;
        }
        if(cnt==1) {
            cout<<1<<endl;
            return;
        }
        else if(trip==1){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
            return;
        }
    }
    else{
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        if(l[i]%k==0) {cout << 0 << endl; return;}
        if(k%(l[i]%k)==0){k = k/(l[i]%k);}
        ans = min({ans, (k-l[i]%k)});
    }
    cout << ans << endl;}
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