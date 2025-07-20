/*Let's denote the f(x)
 function for a string x
 as the number of distinct characters that the string contains. For example f(abc)=3
, f(bbbbb)=1
, and f(babacaba)=3
.

Given a string s
, split it into two non-empty strings a
 and b
 such that f(a)+f(b)
 is the maximum possible. In other words, find the maximum possible value of f(a)+f(b)
 such that a+b=s
 (the concatenation of string a
 and string b
 is equal to string s
).

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
) — the length of the string s
.

The second line contains the string s
, consisting of lowercase English letters.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer  — the maximum possible value of f(a)+f(b)
 such that a+b=s
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> prefix(n), suffix(n);
    unordered_set<char> seen;

    for (int i = 0; i < n; ++i) {
        seen.insert(s[i]);
        prefix[i] = seen.size();
    }

    seen.clear();
    for (int i = n - 1; i >= 0; --i) {
        seen.insert(s[i]);
        suffix[i] = seen.size();
    }

    int maxSum = 0;
    for (int i = 1; i < n; ++i) {
        maxSum = max(maxSum, prefix[i - 1] + suffix[i]);
    }

    cout << maxSum << '\n';
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