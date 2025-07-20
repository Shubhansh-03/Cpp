/*Piggy lives on an infinite plane with the Cartesian coordinate system on it.

There are n
 cities on the plane, numbered from 1
 to n
, and the first k
 cities are defined as major cities. The coordinates of the i
-th city are (xi,yi)
.

Piggy, as a well-experienced traveller, wants to have a relaxing trip after Zhongkao examination. Currently, he is in city a
, and he wants to travel to city b
 by air. You can fly between any two cities, and you can visit several cities in any order while travelling, but the final destination must be city b
.

Because of active trade between major cities, it's possible to travel by plane between them for free. Formally, the price of an air ticket f(i,j)
 between two cities i
 and j
 is defined as follows:

f(i,j)={0,|xi−xj|+|yi−yj|,if cities i and j are both major citiesotherwise

Piggy doesn't want to save time, but he wants to save money. So you need to tell him the minimum value of the total cost of all air tickets if he can take any number of flights.

Input
The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

The first line of each test case contains four integers n
, k
, a
 and b
 (2≤n≤2⋅105
, 0≤k≤n
, 1≤a,b≤n
, a≠b
) — the number of cities, the number of major cities and the numbers of the starting and the ending cities.

Then n
 lines follow, the i
-th line contains two integers xi
 and yi
 (−109≤xi,yi≤109
) — the coordinates of the i
-th city. The first k
 lines describe major cities. It is guaranteed that all coordinates are pairwise distinct.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print a single integer — the minimum value of the total price of all air tickets.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i].first >> l[i].second;
    }
    if(a<=k && b<=k){
        cout << 0 << endl;
    }
    else if(a<=k || b<=k){
        int e1, e2;
        if(a<=k){
            e1 = l[b-1].first;
            e2 = l[b-1].second;
        }
        else{
            e1 = l[a-1].first;
            e2 = l[a-1].second;
        }
        ll min1 = 1e17;
        for(int i=0;i<k;i++){
            min1 = min(min1, abs(l[i].first-e1)+abs(l[i].second-e2));            
        }
        cout << min1 << endl;
    }
    else{
        ll ans = abs(l[a-1].first-l[b-1].first)+abs(l[a-1].second-l[b-1].second);
        ll dist1 = 1e17;
        for(int i=0;i<k;i++){
            dist1 = min(dist1, (ll)(abs(l[a-1].first-l[i].first)+abs(l[a-1].second-l[i].second)));
        }
        ll dist2 = 1e17;
        for(int i=0;i<k;i++){
            dist2 = min(dist2, (ll)(abs(l[b-1].first-l[i].first)+abs(l[b-1].second-l[i].second)));
        }
        cout << min(ans, (dist1+dist2)) << endl;
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