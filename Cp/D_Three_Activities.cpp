/*Winter holidays are coming up. They are going to last for n
 days.

During the holidays, Monocarp wants to try all of these activities exactly once with his friends:

go skiing;
watch a movie in a cinema;
play board games.
Monocarp knows that, on the i
-th day, exactly ai
 friends will join him for skiing, bi
 friends will join him for a movie and ci
 friends will join him for board games.

Monocarp also knows that he can't try more than one activity in a single day.

Thus, he asks you to help him choose three distinct days x,y,z
 in such a way that the total number of friends to join him for the activities (ax+by+cz
) is maximized.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of testcases.

The first line of each testcase contains a single integer n
 (3≤n≤105
) — the duration of the winter holidays in days.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤108
) — the number of friends that will join Monocarp for skiing on the i
-th day.

The third line contains n
 integers b1,b2,…,bn
 (1≤bi≤108
) — the number of friends that will join Monocarp for a movie on the i
-th day.

The fourth line contains n
 integers c1,c2,…,cn
 (1≤ci≤108
) — the number of friends that will join Monocarp for board games on the i
-th day.

The sum of n
 over all testcases doesn't exceed 105
.

Output
For each testcase, print a single integer — the maximum total number of friends that can join Monocarp for the activities on three distinct days.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool compare(vector<ll>& r1, vector<ll>& r2){
    return r1[0] > r2[0];
}
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll> (2));
    vector<vector<ll>> b(n, vector<ll> (2));
    vector<vector<ll>> c(n, vector<ll> (2));

    for(ll i = 0; i<n; i++){
        cin >> a[i][0];
        a[i][1] = i;
    }
    for(ll i = 0; i<n; i++){
        cin >> b[i][0];
        b[i][1] = i;
    }
    for(ll i = 0; i<n; i++){
        cin >> c[i][0];
        c[i][1] = i;
    }

    sort(a.begin(), a.end(), compare);
    sort(b.begin(), b.end(), compare);
    sort(c.begin(), c.end(), compare);
    // cout << a[n-1][0] << " " << b[n-1][0] << " " << c[n-1][0] << endl;

    ll ans = -1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(a[i][1]!=b[j][1] && a[i][1]!=c[k][1] && b[j][1]!=c[k][1]){
                    ans = max(ans, (a[i][0]+b[j][0]+c[k][0]));
                }
            }
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