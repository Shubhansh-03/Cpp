/*In order to test his patients' intelligence, Dr. TC created the following test.

First, he creates a binary string∗
 s
 having n
 characters. Then, he creates n
 binary strings a1,a2,…,an
. It is known that ai
 is created by first copying s
, then flipping the i
'th character (1
 becomes 0
 and vice versa). After creating all n
 strings, he arranges them into a grid where the i
'th row is ai
.

For example,

If s=101
, a=[001,111,100]
.
If s=0000
, a=[1000,0100,0010,0001]
.
The patient needs to count the number of 1
s written on the board in less than a second. Can you pass the test?

∗
A binary string is a string that only consists of characters 1
 and 0
.

Input
The first line of the input consists of a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤10
) — the length of the binary string s
.

The second line of each test case contains a single binary string s
 of size n
.

Output
For each test case, output a single integer, the number of 1
s on the board.

Example
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ans += (n-1);
        }
        else{
            ans++;
        }
    }
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