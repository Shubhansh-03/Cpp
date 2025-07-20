/*You have a card deck of n
 cards, numbered from top to bottom, i. e. the top card has index 1
 and bottom card — index n
. Each card has its color: the i
-th card has color ai
.

You should process q
 queries. The j
-th query is described by integer tj
. For each query you should:

find the highest card in the deck with color tj
, i. e. the card with minimum index;
print the position of the card you found;
take the card and place it on top of the deck.
Input
The first line contains two integers n
 and q
 (2≤n≤3⋅105
; 1≤q≤3⋅105
) — the number of cards in the deck and the number of queries.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤50
) — the colors of cards.

The third line contains q
 integers t1,t2,…,tq
 (1≤tj≤50
) — the query colors. It's guaranteed that queries ask only colors that are present in the deck.

Output
Print q
 integers — the answers for each query.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> l(n);
    vector<int> q(m);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    for(int i=0;i<m;i++){
        cin >> q[i];
    }
    // [1, 23, 4, 6, 1, 5]
    vector<int> stack;
    int t=-1;
    for(int i=0;i<m;i++){
        int query = q[i];
        for(int j=0;j<n;j++){
            if(query==l[i]){

            }
        }
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