/*There are n
 candies put from left to right on a table. The candies are numbered from left to right. The i
-th candy has weight wi
. Alice and Bob eat candies.

Alice can eat any number of candies from the left (she can't skip candies, she eats them in a row).

Bob can eat any number of candies from the right (he can't skip candies, he eats them in a row).

Of course, if Alice ate a candy, Bob can't eat it (and vice versa).

They want to be fair. Their goal is to eat the same total weight of candies. What is the most number of candies they can eat in total?

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤2⋅105
) — the number of candies on the table.

The second line of each test case contains n
 integers w1,w2,…,wn
 (1≤wi≤104
) — the weights of candies from left to right.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print a single integer — the maximum number of candies Alice and Bob can eat in total while satisfying the condition.
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
    int s = 0, e=n-1;
    ll aw = l[s], bw = l[e];
    ll ans = 0;
    while(s<e){
        // cout << s << " " << e << " ";
        if(aw == bw){
            ans = s+1 + (n-e);
            bw+=l[--e];
            aw+=l[++s];
        }
        else if(aw>bw){
            bw+=l[--e];
        }
        else{
            aw+=l[++s];
        }
    }
    if(aw == bw){
        ans = s+(n-1-e);
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