/*Mircea has n
 pictures. The i
-th picture is a square with a side length of si
 centimeters.

He mounted each picture on a square piece of cardboard so that each picture has a border of w
 centimeters of cardboard on all sides. In total, he used c
 square centimeters of cardboard. Given the picture sizes and the value c
, can you find the value of w
?

A picture of the first test case. Here c=50=52+42+32
, so w=1
 is the answer.
Please note that the piece of cardboard goes behind each picture, not just the border.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains two positive integers n
 (1≤n≤2⋅105
) and c
 (1≤c≤1018
) — the number of paintings, and the amount of used square centimeters of cardboard.

The second line of each test case contains n
 space-separated integers si
 (1≤si≤104
) — the sizes of the paintings.

The sum of n
 over all test cases doesn't exceed 2⋅105
.

Additional constraint on the input: Such an integer w
 exists for each test case.

Please note, that some of the input for some test cases won't fit into 32-bit integer type, so you should use at least 64-bit integer type in your programming language (like long long for C++).

Output
For each test case, output a single integer — the value of w
 (w≥1
) which was used to use exactly c
 squared centimeters of cardboard.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll root(long long num){
    if(num==1 || num==0) return num;
    ll s=1, e=num>>1;
    while(s<e){
        ll cum = (s+e)/2;
        if(cum*cum==num){
            return cum;
        }
        if(cum*cum>num || cum<0){
            e = cum-1;
        }
        else{
            s = cum+1;
        }
    }
    return s;
}
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    ll a = n;
    ll b = 0;
    for(int i=0;i<n;b+=s[i++]);
    for(int i=0;i<n;i++){
        ll temp = s[i]*s[i];
        c = c-temp;
    }
    // c = -1*c/4;
    // cout << a << " " << b << " " << c << " ";
    ll ans = sqrt(n)*sqrt((b*b/n+((b*b)%n==0?0:1)+c));
    ans = (ans-b)/(2*a)+((ans-b)%(2*a)==0?0:1);
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