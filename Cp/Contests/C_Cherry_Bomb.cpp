/*Two integer arrays a
 and b
 of size n
 are complementary if there exists an integer x
 such that ai+bi=x
 over all 1≤i≤n
. For example, the arrays a=[2,1,4]
 and b=[3,4,1]
 are complementary, since ai+bi=5
 over all 1≤i≤3
. However, the arrays a=[1,3]
 and b=[2,1]
 are not complementary.

Cow the Nerd thinks everybody is interested in math, so he gave Cherry Bomb two complementary integer arrays a
 and b
. It is known that a
 and b
 both contain n
 non-negative integers at most k
.

Unfortunately, Cherry Bomb has lost some elements in b
. Lost elements in b
 are denoted with −1
. Help Cherry Bomb count the number of possible arrays b
 such that:

a
 and b
 are complementary.
All lost elements are replaced with non-negative integers no more than k
.
Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤n≤2⋅105
, 0≤k≤109
) — the size of the arrays and the maximum possible value of their elements.

The second line contains n
 integers a1,a2,...,an
 (0≤ai≤k
).

The third line contains n
 integers b1,b2,...,bn
 (−1≤bi≤k
). If bi=−1
, then this element is missing.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
Output exactly one integer, the number of ways Cherry Bomb can fill in the missing elements from b
 such that a
 and b
 are complementary.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }   
    int com = 0, end = 0;
    int comp;
    int maxa = INT_MIN;
    int mina = INT_MAX;
    for(int i=0;i<n;i++){
        maxa = max(maxa, a[i]);
        mina = min(mina, a[i]);
        if(b[i]!=-1){
            if(!com){
                com=1;
                comp = a[i]+b[i];
            }
            else if(a[i]+b[i]!=comp){
                end=1;
                break;
            }
        }
    }
    if(end){
        cout << 0 << endl;
        return;
    }
    if(com==0){
        cout << k-(maxa-mina)+1 << endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(b[i]==-1){
            if(comp-a[i]>k || comp-a[i]<0){
                cout << 0 << endl;
                return;
            }
        }
    }
    cout << 1 << endl;

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