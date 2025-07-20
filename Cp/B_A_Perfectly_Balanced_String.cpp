/*Let's call a string s
 perfectly balanced if for all possible triplets (t,u,v)
 such that t
 is a non-empty substring of s
 and u
 and v
 are characters present in s
, the difference between the frequencies of u
 and v
 in t
 is not more than 1
.

For example, the strings "aba" and "abc" are perfectly balanced but "abb" is not because for the triplet ("bb",'a','b'), the condition is not satisfied.

You are given a string s
 consisting of lowercase English letters only. Your task is to determine whether s
 is perfectly balanced or not.

A string b
 is called a substring of another string a
 if b
 can be obtained by deleting some characters (possibly 0
) from the start and some characters (possibly 0
) from the end of a
.

Input
The first line of input contains a single integer t
 (1≤t≤2⋅104
) denoting the number of testcases.

Each of the next t
 lines contain a single string s
 (1≤|s|≤2⋅105
), consisting of lowercase English letters.

It is guaranteed that the sum of |s|
 over all testcases does not exceed 2⋅105
.

Output
For each test case, print "YES" if s
 is a perfectly balanced string, and "NO" otherwise.

You may print each letter in any case (for example, "YES", "Yes", "yes", "yEs" will all be recognized as positive answer).
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int uniq = 0;
    int f=0;
    map<char, int> map;
    for(int i=0;i<n;i++){
        if(uniq==i){
            if(map[s[i]]==0){
                map[s[i]]++;
                uniq++;
            }
            else{
                map[s[i]]++;
                if(s[i]!=s[i-uniq]){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        else{
            map[s[i]]++;
            if(s[i]!=s[i-uniq]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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