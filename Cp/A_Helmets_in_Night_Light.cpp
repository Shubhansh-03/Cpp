/*Pak Chanek is the chief of a village named Khuntien. On one night filled with lights, Pak Chanek has a sudden and important announcement that needs to be notified to all of the n
 residents in Khuntien.

First, Pak Chanek shares the announcement directly to one or more residents with a cost of p
 for each person. After that, the residents can share the announcement to other residents using a magical helmet-shaped device. However, there is a cost for using the helmet-shaped device. For each i
, if the i
-th resident has got the announcement at least once (either directly from Pak Chanek or from another resident), he/she can share the announcement to at most ai
 other residents with a cost of bi
 for each share.

If Pak Chanek can also control how the residents share the announcement to other residents, what is the minimum cost for Pak Chanek to notify all n
 residents of Khuntien about the announcement?

Input
Each test contains multiple test cases. The first line contains an integer t
 (1≤t≤104
) — the number of test cases. The following lines contain the description of each test case.

The first line contains two integers n
 and p
 (1≤n≤105
; 1≤p≤105
) — the number of residents and the cost for Pak Chanek to share the announcement directly to one resident.

The second line contains n
 integers a1,a2,a3,…,an
 (1≤ai≤105
) — the maximum number of residents that each resident can share the announcement to.

The third line contains n
 integers b1,b2,b3,…,bn
 (1≤bi≤105
) — the cost for each resident to share the announcement to one other resident.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output a line containing an integer representing the minimum cost to notify all n
 residents of Khuntien about the announcement.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool sortcol( const vector<int>& v1, const vector<int>& v2 ) {
    return v1[1] < v2[1];
}
void solve()
{
    int n, p;
    cin >> n >> p;
    vector<vector<int>> l(n, vector<int>(2));

    for(int i=0;i<n;i++){
        cin >> l[i][0];
    }
    for(int i=0;i<n;i++){
        cin >> l[i][1];
    }
    sort(l.begin(), l.end(), sortcol);
    int pp = n-1;
    int i=0;
    long long ans=p;
    while(pp>0){
        if(i<n && l[i][1]<p){
            ans += (long long)min(pp, l[i][0])*(long long)l[i][1];
            pp -= l[i][0];
            i++;
        }
        else{
            ans+=(long long)pp*(long long)p;
            pp=0;
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