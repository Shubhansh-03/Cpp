/*Tenzing received 3n
 books from his fans. The books are arranged in 3
 stacks with n
 books in each stack. Each book has a non-negative integer difficulty rating.

Tenzing wants to read some (possibly zero) books. At first, his knowledge is 0
.

To read the books, Tenzing will choose a non-empty stack, read the book on the top of the stack, and then discard the book. If Tenzing's knowledge is currently u
, then his knowledge will become u|v
 after reading a book with difficulty rating v
. Here |
 denotes the bitwise OR operation. Note that Tenzing can stop reading books whenever he wants.

Tenzing's favourite number is x
. Can you help Tenzing check if it is possible for his knowledge to become x
?

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

The first line of each test case contains two integers n
 and x
 (1≤n≤105
, 0≤x≤109
) — the number of books in each stack and Tenzing's favourite number.

The second line of each test case contains n
 integers a1,a2,…,an
 (0≤ai≤109
)  — the difficulty rating of the books in the first stack, from top to bottom.

The third line of each test case contains n
 integers b1,b2,…,bn
 (0≤bi≤109
)  — the difficulty rating of the books in the second stack, from top to bottom.

The fourth line of each test case contains n
 integers c1,c2,…,cn
 (0≤ci≤109
)  — the difficulty rating of the books in the third stack, from top to bottom.

It is guaranteed that the sum of n
 does not exceed 105
.

Output
For each test case, output "Yes" (without quotes) if Tenzing can make his knowledge equal to x
, and "No" (without quotes) otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b(n), c(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<n;i++){
        cin >> b[i];
    }
    for(ll i=0;i<n;i++){
        cin >> c[i];
    }
    if(x==0){
        cout << "YES\n";
        return;
    }
    ll i=0, j=0, k=0;
    ll know = 0;
    while(true){
        // cout << (a[i]&~x) ;
        if(i<n && ((a[i]&x && !(a[i]&~x)) || a[i]==0 )){
            know = know|a[i++];
        }
        else if(j<n && ((b[j]&x && !(b[j]&~x)) || b[j]==0)){
            know = know|b[j++];
        }
        else if(k<n && ((c[k]&x && !(c[k]&~x)) || c[k]==0)){
            know = know|c[k++];
        }
        else{
            // cout << i << j << k;
            cout << "NO\n";
            break;
        }
        if(know==x){
            cout << "YES\n";
            break;
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