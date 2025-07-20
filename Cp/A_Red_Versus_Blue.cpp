/*Team Red and Team Blue competed in a competitive FPS. Their match was streamed around the world. They played a series of n
 matches.

In the end, it turned out Team Red won r
 times and Team Blue won b
 times. Team Blue was less skilled than Team Red, so b
 was strictly less than r
.

You missed the stream since you overslept, but you think that the match must have been neck and neck since so many people watched it. So you imagine a string of length n
 where the i
-th character denotes who won the i
-th match  — it is R if Team Red won or B if Team Blue won. You imagine the string was such that the maximum number of times a team won in a row was as small as possible. For example, in the series of matches RBBRRRB, Team Red won 3
 times in a row, which is the maximum.

You must find a string satisfying the above conditions. If there are multiple answers, print any.

Input
The first line contains a single integer t
 (1≤t≤1000
)  — the number of test cases.

Each test case has a single line containing three integers n
, r
, and b
 (3≤n≤100
; 1≤b<r≤n
, r+b=n
).

Output
For each test case, output a single line containing a string satisfying the given conditions. If there are multiple answers, print any.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    int maxr = r/(b+1);
    int rem = r%(b+1);
    // cout << maxr;
    int count=0, f=1;
    for(int i=0;i<n;i++){
        if(count<maxr && r>0){
            if(rem>0 && f){
                cout << "RR" ;
                count++;
                rem--;
                r-=2;
                f=0;
            }
            else{
                cout << "R";
                count++;
                r--;
            }
        }
        else if(b>0){
            f=1;
            cout << "B";
            count=0;
            b--;
        }
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