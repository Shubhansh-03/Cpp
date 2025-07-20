/*You are given an array a
 consisting of n
 positive integers. You have to choose a positive integer d
 and paint all elements into two colors. All elements which are divisible by d
 will be painted red, and all other elements will be painted blue.

The coloring is called beautiful if there are no pairs of adjacent elements with the same color in the array. Your task is to find any value of d
 which yields a beautiful coloring, or report that it is impossible.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of testcases.

The first line of each testcase contains one integer n
 (2≤n≤100
) — the number of elements of the array.

The second line of each testcase contains n
 integers a1,a2,…,an
 (1≤ai≤1018
).

Output
For each testcase print a single integer. If there is no such value of d
 that yields a beautiful coloring, print 0
. Otherwise, print any suitable value of d
 (1≤d≤1018
).
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    ll gcd1 = l[0], gcd2 = l[1];
    for(int i=2;i<n;i++){
        if(i%2==0){
            gcd1 = __gcd(gcd1, l[i]);
        }
        else{
            gcd2 = __gcd(gcd2, l[i]);
        }
    }
    if(gcd1 == gcd2){
        cout << "0" << endl;
        return;
    }
    else{
        int f1 = 0, f2 = 0;
        for(int i=0;i<n;i++){
            if(i%2==0 && !f1){
                if(l[i]%gcd2==0){
                    f1 = 1;
                }
            }
            else if(i%2==1 && !f2){
                if(l[i]%gcd1==0){
                    f2 = 1;
                }
            }
        }
        if(f1 && f2){
            cout << "0\n";
        }
        else{
            if(!f1){
                cout << gcd2 << endl;
            }
            else{
                cout << gcd1 << endl;
            }
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