/*Johnny has recently found an ancient, broken computer. The machine has only one register, which allows one to put in there one variable. Then in one operation, you can shift its bits left or right by at most three positions. The right shift is forbidden if it cuts off some ones. So, in fact, in one operation, you can multiply or divide your number by 2
, 4
 or 8
, and division is only allowed if the number is divisible by the chosen divisor.

Formally, if the register contains a positive integer x
, in one operation it can be replaced by one of the following:

x⋅2
x⋅4
x⋅8
x/2
, if x
 is divisible by 2
x/4
, if x
 is divisible by 4
x/8
, if x
 is divisible by 8
For example, if x=6
, in one operation it can be replaced by 12
, 24
, 48
 or 3
. Value 6
 isn't divisible by 4
 or 8
, so there're only four variants of replacement.

Now Johnny wonders how many operations he needs to perform if he puts a
 in the register and wants to get b
 at the end.

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The following t
 lines contain a description of test cases.

The first and only line in each test case contains integers a
 and b
 (1≤a,b≤1018
) — the initial and target value of the variable, respectively.

Output
Output t
 lines, each line should contain one integer denoting the minimum number of operations Johnny needs to perform. If Johnny cannot get b
 at the end, then write −1
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    long long a, b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << endl;
        return;
    }
    if(b>a){
        if(b%a!=0){
            cout << -1 << endl;
        }
        else{
            long long ans;
            ans = b/a;
            int count=0;
            // int temp=1;
            while(ans!=1){
                if(ans&1==1){
                    cout << -1 << endl;
                    return;
                }
                ans = ans>>1;
                count++;
            }
            int prt = count/3+(count%3==0?0:1);
            cout << prt << endl;
        }
    }
    else{
        if(a%b!=0){
            cout << -1 << endl;
            return;
        }
        long long ans;
        ans = a/b;
        int count=0;
        // int temp=1;
        while(ans!=1){
            if(ans&1==1){
                cout << -1 << endl;
                return;
            }
            ans = ans>>1;
            count++;
        }
        int prt = count/3+(count%3==0?0:1);
        cout << prt << endl;
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