/*Luke likes to eat. There are n
 piles of food aligned in a straight line in front of him. The i
-th pile contains ai
 units of food.

Luke will walk from the 1
-st pile towards the n
-th pile, and he wants to eat every pile of food without walking back. When Luke reaches the i
-th pile, he can eat that pile if and only if |v−ai|≤x
, where x
 is a fixed integer, and v
 is Luke's food affinity.

Before Luke starts to walk, he can set v
 to any integer. Also, for each i
 (1≤i≤n
), Luke can change his food affinity to any integer before he eats the i
-th pile.

Find the minimum number of changes needed to eat every pile of food.

Note that the initial choice for v
 is not considered as a change.

Input
The input consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

For each test case, the first line contains two integers, n,x
 (1≤n≤2⋅105
, 1≤x≤109
) — the number of piles, and the maximum difference between the size of a pile and Luke's food affinity, such that Luke can eat the pile.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output an integer on a separate line, which is the minimum number of changes needed.

Example
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  ll n,x; cin >> n >> x;
  vector<int> a(n,0);
  for(auto &x: a) cin >> x;
  int low = a[0] - x, high = a[0] + x;
  int changes = 0;
  for(int i = 0 ; i < n ; i++){
    int clow = a[i] - x;
    int chigh = a[i] + x;
    low = max(low , clow);
    high = min(high , chigh);
    if(low > high){
      changes++;
      low = clow;
      high = chigh;
    }
  }
  cout << changes << "\n";
  return;
}



int main() {


	int t = 1; cin >> t;

	while(t--){

	  solve();

	}

return 0;

}