/*Alice gave Bob two integers a
 and b
 (a>0
 and b≥0
). Being a curious boy, Bob wrote down an array of non-negative integers with MEX
 value of all elements equal to a
 and XOR
 value of all elements equal to b
.

What is the shortest possible length of the array Bob wrote?

Recall that the MEX
 (Minimum EXcluded) of an array is the minimum non-negative integer that does not belong to the array and the XOR
 of an array is the bitwise XOR of all the elements of the array.

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤5⋅104
) — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers a
 and b
 (1≤a≤3⋅105
; 0≤b≤3⋅105
) — the MEX
 and XOR
 of the array, respectively.

Output
For each test case, output one (positive) integer — the length of the shortest array with MEX
 a
 and XOR
 b
. We can show that such an array always exists.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll xr=0;
    if((a-1)%4==0){
        xr = a-1;
    }
    else if((a-1)%4==1){
        xr = 1;
    }
    else if((a-1)%4==2){
        xr = a;
    }
    else{
        xr=0;
    }
    // cout << xr << endl;
    
    if(xr==b){
        cout << a << endl;
    }
    else{
        ll why = xr^b;
        if(why==a){
            cout << a+2 << endl;
        }
        else{
            cout << a+1 << endl;
        }
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