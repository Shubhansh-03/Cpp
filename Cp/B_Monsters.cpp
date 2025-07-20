/*Monocarp is playing yet another computer game. And yet again, his character is killing some monsters. There are n
 monsters, numbered from 1
 to n
, and the i
-th of them has ai
 health points initially.

Monocarp's character has an ability that deals k
 damage to the monster with the highest current health. If there are several of them, the one with the smaller index is chosen. If a monster's health becomes less than or equal to 0
 after Monocarp uses his ability, then it dies.

Monocarp uses his ability until all monsters die. Your task is to determine the order in which monsters will die.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤n≤3⋅105
; 1≤k≤109
) — the number of monsters and the damage which Monocarp's ability deals.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the initial health points of monsters.

The sum of n
 over all test cases doesn't exceed 3⋅105
.

Output
For each test case, print n
 integers — the indices of monsters in the order they die.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k ; cin >> n >> k;

 vector<pair<int, int>> vp;

 for(int i = 1; i <= n; i++) {

 		int x; cin >> x;

		 x %= k;

 		if(!x) x = k;

 		vp.emplace_back(x, -i);

 }

 sort(vp.rbegin(), vp.rend());



 for(auto [a, b] : vp) cout << -b <<" ";

 cout << endl;


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