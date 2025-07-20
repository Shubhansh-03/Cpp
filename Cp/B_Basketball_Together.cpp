/*A basketball competition is held where the number of players in a team does not have a maximum or minimum limit (not necessarily 5
 players in one team for each match). There are N
 candidate players in the competition that will be trained by Pak Chanek, the best basketball coach on earth. The i
-th candidate player has a power of Pi
.

Pak Chanek will form zero or more teams from the N
 candidate players on the condition that each candidate player may only join in at most one team. Each of Pak Chanek's teams will be sent to compete once with an enemy team that has a power of D
. In each match, the team sent is said to defeat the enemy team if the sum of powers from the formed players is strictly greater than D
.

One of Pak Chanek's skills is that when a team that has been formed plays in a match, he can change the power of each player in the team to be equal to the biggest player power from the team.

Determine the maximum number of wins that can be achieved by Pak Chanek.

Input
The first line contains two integers N
 and D
 (1≤N≤105
, 1≤D≤109
) — the number of candidate players and the power of the enemy team.

The second line contains N
 integers P1,P2,…,PN
 (1≤Pi≤109
) — the powers of all candidate players.

Output
A line containing an integer representing the maximum number of wins that can be achieved by Pak Chanek.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<long long> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }

    sort(l.begin(), l.end());
    int rt=n-1, lt=-1;
    int ans=0;
    while(lt<rt){
        if(l[rt]<=d){
            long long count=1;
            if(lt==-1) lt++;
            for(;lt<rt;lt++){
                count++;
                if(count*l[rt]>d){
                    // cout << count << " " << l[rt] << endl;
                    rt--;
                    lt++;
                    ans++;
                    break;
                }
            }
        }
        else{
            ans++;
            rt--;
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
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}