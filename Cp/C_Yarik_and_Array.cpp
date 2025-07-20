/*A subarray is a continuous part of array.

Yarik recently found an array a
 of n
 elements and became very interested in finding the maximum sum of a non empty subarray. However, Yarik doesn't like consecutive integers with the same parity, so the subarray he chooses must have alternating parities for adjacent elements.

For example, [1,2,3]
 is acceptable, but [1,2,4]
 is not, as 2
 and 4
 are both even and adjacent.

You need to help Yarik by finding the maximum sum of such a subarray.

Input
The first line contains an integer t
 (1≤t≤104)
 — number of test cases. Each test case is described as follows.

The first line of each test case contains an integer n
 (1≤n≤2⋅105)
 — length of the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (−103≤ai≤103)
 — elements of the array.

It is guaranteed that the sum of n
 for all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer — the answer to the problem.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){//n
            cin>>v[i];
        }
        ll ans=INT_MIN;
        int i=0,j=0;
        ll sum=0;
        while(j<n){//n
            if(sum<0){
                sum=0;
                i=j;
            }
            if(i<j){
                if( (v[j]^v[j-1]) & 1 ){
                    sum+=v[j];
                }
                else{
                    sum=v[j];
                    i=j;
                }
            }
            else{
                sum=v[j];
            }
            ans=max(ans,sum);
            j++;
        }
        cout<<ans<<endl;

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