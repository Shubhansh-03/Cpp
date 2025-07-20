/*There is a binary string a
 of length n
. In one operation, you can select any prefix of a
 with an equal number of 0
 and 1
 symbols. Then all symbols in the prefix are inverted: each 0
 becomes 1
 and each 1
 becomes 0
.

For example, suppose a=0111010000
.

In the first operation, we can select the prefix of length 8
 since it has four 0
's and four 1
's: [01110100]00→[10001011]00
.
In the second operation, we can select the prefix of length 2
 since it has one 0
 and one 1
: [10]00101100→[01]00101100
.
It is illegal to select the prefix of length 4
 for the third operation, because it has three 0
's and one 1
.
Can you transform the string a
 into the string b
 using some finite number of operations (possibly, none)?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤3⋅105
) — the length of the strings a
 and b
.

The following two lines contain strings a
 and b
 of length n
, consisting of symbols 0
 and 1
.

The sum of n
 across all test cases does not exceed 3⋅105
.

Output
For each test case, output "YES" if it is possible to transform a
 into b
, or "NO" if it is impossible. You can print each letter in any case (upper or lower).
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    if(n==1){
        if(a[0]==b[0]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        return;
    }
    int corr = 0;
    corr = (a[0]==b[0])? 1: 0;
    ll ones = 0, zeros = 0;

    for(int i=0;i<n;i++){

        if(a[i]==b[i] && !corr){
            if(zeros != ones){
                cout << "NO\n";
                return;
            }
            corr = 1;    
        }
        else if(a[i]!=b[i] && corr){
            if(zeros != ones){
                cout << "NO\n";
                return;
            }
            corr = 0;
        }
        if(a[i]=='0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    if(!corr){
        if(ones != zeros){
            cout << "NO\n";
            return; 
        }
    }
    cout << "YES\n";
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