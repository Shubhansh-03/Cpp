/*Monocarp is playing a computer game. In order to level up his character, he can complete quests. There are n
 quests in the game, numbered from 1
 to n
.

Monocarp can complete quests according to the following rules:

the 1
-st quest is always available for completion;
the i
-th quest is available for completion if all quests j<i
 have been completed at least once.
Note that Monocarp can complete the same quest multiple times.

For each completion, the character gets some amount of experience points:

for the first completion of the i
-th quest, he gets ai
 experience points;
for each subsequent completion of the i
-th quest, he gets bi
 experience points.
Monocarp is a very busy person, so he has free time to complete no more than k
 quests. Your task is to calculate the maximum possible total experience Monocarp can get if he can complete no more than k
 quests.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤n≤2⋅105
; 1≤k≤2⋅105
) — the number of quests and the maximum number of quests Monocarp can complete, respectively.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤103
).

The third line contains n
 integers b1,b2,…,bn
 (1≤bi≤103
).

Additional constraint on the input: the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print a single integer — the maximum possible total experience Monocarp can get if he can complete no more than k
 quests.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> maxb(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    ll maxnum=b[0];
    ll sum = 0;
    for(int i=0;i<n;i++){
        maxnum = max(maxnum, b[i]);
        maxb[i] = maxnum;
        sum += a[i];
        a[i] = sum;
    }
    
    ll ans=a[0]+(k-1)*maxb[0];
    for(int i=1;i<n;i++){
        if(k-i<=0) break;
        ans = max(ans, (a[i]+maxb[i]*(k-i-1)));
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