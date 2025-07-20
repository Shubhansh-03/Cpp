/*You love fish, that's why you have decided to build an aquarium. You have a piece of coral made of n
 columns, the i
-th of which is ai
 units tall. Afterwards, you will build a tank around the coral as follows:

Pick an integer h≥1
 — the height of the tank. Build walls of height h
 on either side of the tank.
Then, fill the tank up with water so that the height of each column is h
, unless the coral is taller than h
; then no water should be added to this column.
For example, with a=[3,1,2,4,6,2,5]
 and a height of h=4
, you will end up using a total of w=8
 units of water, as shown.

You can use at most x
 units of water to fill up the tank, but you want to build the biggest tank possible. What is the largest value of h
 you can select?
Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two positive integers n
 and x
 (1≤n≤2⋅105
; 1≤x≤109
) — the number of columns of the coral and the maximum amount of water you can use.

The second line of each test case contains n
 space-separated integers ai
 (1≤ai≤109
) — the heights of the coral.

The sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, output a single positive integer h
 (h≥1
) — the maximum height the tank can have, so you need at most x
 units of water to fill up the tank.

We have a proof that under these constraints, such a value of h
 always exists.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll calc(vector<ll> l, ll mid){
    int i = 0;
    ll ans = 0;
    while(i<l.size() && l[i]<mid){
        ans += (mid-l[i++]);
    }
    return ans;
}
void solve()
{
    ll n, w;
    cin >> n >> w;
    vector<ll> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }

    sort(l.begin(), l.end());
    ll maxnum = l[n-1];
    ll tempw = 0;
    for(int i=0;i<n;i++){
        tempw += (maxnum-l[i]);
    }
    if(tempw==w){
        cout << maxnum << endl;
    }
    else if(tempw>w){
        ll s = 0, e=maxnum;
        ll result;
        while(s<=e){
            ll mid = (s+e)/2;
            ll tw = calc(l, mid);
            // cout << tw << " " << mid << " ";
            if(tw==w){
                result = mid;
                break;
            }
            else if(tw<w){
                result = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        cout << result << endl;
    }
    else{
        cout << (maxnum + (w-tempw)/n) << endl;
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