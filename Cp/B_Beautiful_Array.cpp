/*Stanley defines the beauty of an array a
 of length n
, which contains non-negative integers, as follows:
∑i=1n⌊ai/k⌋,
which means that we divide each element by k
, round it down, and sum up the resulting values.

Stanley told Sam the integer k
 and asked him to find an array a
 of n
 non-negative integers, such that the beauty is equal to b
 and the sum of elements is equal to s
. Help Sam — find any of the arrays satisfying the conditions above.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤1000
). Description of the test cases follows.

The first line of each test case contains integers n
, k
, b
, s
 (1≤n≤105
, 1≤k≤109
, 0≤b≤109
, 0≤s≤1018
).

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case print −1
 if such array a
 does not exist. Otherwise print n
 non-negative integers a1,a2,…,an
 (0≤ai≤1018
) — the answer.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
    if(s>=k*b && s<=(k*b+n*(k-1))){
        for(int i=0;i<n;i++){
            if(s==0){
                cout << 0 << " ";
            }
            else if(s/k>b){
                cout << k-1 << " ";
                s-=(k-1);
            }
            else{
                cout << s << " ";
                s=0;
            }
        }
        cout << endl;
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