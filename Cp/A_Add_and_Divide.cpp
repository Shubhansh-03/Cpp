/*You have two positive integers a
 and b
.


You can perform two kinds of operations:

a=⌊ab⌋
 (replace a
 with the integer part of the division between a
 and b
)
b=b+1
 (increase b
 by 1
)
Find the minimum number of operations required to make a=0
.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The only line of the description of each test case contains two integers a
, b
 (1≤a,b≤109
).

Output
For each test case, print a single integer: the minimum number of operations
required to make a=0
.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define mod 1000000007
void solve() {
  ll a, b;

  cin >> a >> b;

  if (b >= 6) {

    int count = 0;

    lli x = a;

    while (x > 0) {

      x = x / b;

      count++;
    }

    cout << count << endl;

  } else {

    lli mincount = INT_MAX;

    for (int i = b; i <= 6; i++) {

      lli count = i - b;

      lli x = a;

      if (i >= 2) {

        while (x > 0) {

          x = x / i;

          count++;
        }

        mincount = min(mincount, count);
      }
    }

    cout << mincount << endl;
  }

  // cout << "Hehe";
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
  return 0;
}
