/*An array [b1,b2,…,bm]
 is a palindrome, if bi=bm+1−i
 for each i
 from 1
 to m
. Empty array is also a palindrome.

An array is called kalindrome, if the following condition holds:

It's possible to select some integer x
 and delete some of the elements of the array equal to x
, so that the remaining array (after gluing together the remaining parts) is a palindrome.

Note that you don't have to delete all elements equal to x
, and you don't have to delete at least one element equal to x
.

For example :

[1,2,1]
 is kalindrome because you can simply not delete a single element.
[3,1,2,3,1]
 is kalindrome because you can choose x=3
 and delete both elements equal to 3
, obtaining array [1,2,1]
, which is a palindrome.
[1,2,3]
 is not kalindrome.
You are given an array [a1,a2,…,an]
. Determine if a
 is kalindrome or not.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — elements of the array.

It's guaranteed that the sum of n
 over all test cases won't exceed 2⋅105
.

Output
For each test case, print YES if a
 is kalindrome and NO otherwise. You can print each letter in any case.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int s=0, e=n-1;
    int f=0, num=-1;
    while(s<e){
        if(l[s]==l[e]){
            s++;
            e--;
        }
        else if(f==1){
            if(l[s]==num){
                int temp = l[s];
                while(l[s]==temp && s<e){
                    s++;
                }
                if(l[s]!=l[e] || s>e){
                    cout << "NO" << endl;
                    return;
                }
            }
            else if(l[e]==num){
                int temp = l[e];
                while(l[e]==temp && s<e){
                    e--;
                }
                if(l[s]!=l[e] || s>e){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        else{
            f=1;
            
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