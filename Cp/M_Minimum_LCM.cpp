/*You are given an integer n
.

Your task is to find two positive (greater than 0
) integers a
 and b
 such that a+b=n
 and the least common multiple (LCM) of a
 and b
 is the minimum among all possible values of a
 and b
. If there are multiple answers, you can print any of them.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (2≤n≤109
).

Output
For each test case, print two positive integers a
 and b
 — the answer to the problem. If there are multiple answers, you can print any of them.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int ansa=1, ansb=n-1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ansa = n/i;
            ansb = n-ansa;
            break;
        }
    }
    cout << ansa << " " << ansb << endl;
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