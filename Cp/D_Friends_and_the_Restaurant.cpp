/*A group of n
 friends decide to go to a restaurant. Each of the friends plans to order meals for xi
 burles and has a total of yi
 burles (1≤i≤n
).

The friends decide to split their visit to the restaurant into several days. Each day, some group of at least two friends goes to the restaurant. Each of the friends visits the restaurant no more than once (that is, these groups do not intersect). These groups must satisfy the condition that the total budget of each group must be not less than the amount of burles that the friends in the group are going to spend at the restaurant. In other words, the sum of all xi
 values in the group must not exceed the sum of yi
 values in the group.

What is the maximum number of days friends can visit the restaurant?

For example, let there be n=6
 friends for whom x
 = [8,3,9,2,4,5
] and y
 = [5,3,1,4,5,10
]. Then:

first and sixth friends can go to the restaurant on the first day. They will spend 8+5=13
 burles at the restaurant, and their total budget is 5+10=15
 burles. Since 15≥13
, they can actually form a group.
friends with indices 2,4,5
 can form a second group. They will spend 3+2+4=9
 burles at the restaurant, and their total budget will be 3+4+5=12
 burles (12≥9
).
It can be shown that they will not be able to form more groups so that each group has at least two friends and each group can pay the bill.

So, the maximum number of groups the friends can split into is 2
. Friends will visit the restaurant for a maximum of two days. Note that the 3
-rd friend will not visit the restaurant at all.

Output the maximum number of days the friends can visit the restaurant for given n
, x
 and y
.

Input
The first line of the input contains an integer t
 (1≤t≤104
) — the number of test cases in the test.

The descriptions of the test cases follow.

The first line of each test case contains a single integer n
 (2≤n≤105
) — the number of friends.

The second line of each test case contains exactly n
 integers x1,x2,…,xn
 (1≤xi≤109
). The value of xi
 corresponds to the number of burles that the friend numbered i
 plans to spend at the restaurant.

The third line of each test case contains exactly n
 integers y1,y2,…,yn
 (1≤yi≤109
). The value yi
 corresponds to the number of burles that the friend numbered i
 has.

It is guaranteed that the sum of n
 values over all test cases does not exceed 105
.

Output
For each test case, print the maximum number of days to visit the restaurant. If friends cannot form even one group to visit the restaurant, print 0.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> x(n);
    for(auto& i: x){
        cin >> i;
    }
    vector<ll> y(n);
    for(auto& i: y){
        cin >> i;
    }
    vector<ll> l(n);
    for(ll i=0;i<n;i++){
        l[i] = y[i]-x[i];
    }
    sort(l.begin(), l.end());
    ll ans = 0;
    ll b=0, e=n-1;
    while(b<e){
        ll sum = l[b]+l[e];
        if(sum<0){
            b++;
        }
        else{
            ans++;
            e--;
            b++;
        }
    }
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