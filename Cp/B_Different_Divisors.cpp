/*Positive integer x
 is called divisor of positive integer y
, if y
 is divisible by x
 without remainder. For example, 1
 is a divisor of 7
 and 3
 is not divisor of 8
.

We gave you an integer d
 and asked you to find the smallest positive integer a
, such that

a
 has at least 4
 divisors;
difference between any two divisors of a
 is at least d
.
Input
The first line contains a single integer t
 (1≤t≤3000
) — the number of test cases.

The first line of each test case contains a single integer d
 (1≤d≤10000
).

Output
For each test case print one integer a
 — the answer for this test case.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll d;
    cin >> d;
    vector<int> prime(2*d+100, 1);
        int i=2;
        while(i<2*d+100){
        if(prime[i]){
            for(int j=2;i*j<2*d+100;j++){
                prime[i*j] = 0;
            }
        }
        i++;
    }
        
    // for(int i=2;i<2*d+100;i++){
    //     if(prime[i]){
    //         cout << i << " ";
    //     }
    // }
    ll num1 = 1+d;
    while(!prime[num1]){
        num1++;
    }
    ll num2 = num1+d;
    while(!prime[num2]){
        num2++;
    }
// cout << num1 << " " << num2 << endl;
    ll ans = (num1)*(num2);
    cout << ans << endl;
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