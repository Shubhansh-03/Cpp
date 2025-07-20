/*A 10×10
 target is made out of five "rings" as shown. Each ring has a different point value: the outermost ring — 1 point, the next ring — 2 points, ..., the center ring — 5 points.


Vlad fired several arrows at the target. Help him determine how many points he got.

Input
The input consists of multiple test cases. The first line of the input contains a single integer t
 (1≤t≤1000
) — the number of test cases.

Each test case consists of 10 lines, each containing 10 characters. Each character in the grid is either X
 (representing an arrow) or .
 (representing no arrow).
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    vector<pair<int, int>> l;
    for(int i=0;i<10;i<i++){
        for(int j=0;j<10;j++){
            char t;
            cin >> t;
            if(t=='X'){
                l.push_back({(i)*2-9, (j)*2-9});
            }
        }
    }
    int ans=0;
    for(int i=0;i<l.size();i++){
        int x = abs(l[i].first);
        int y = abs(l[i].second);
        
        if(x<2 && y<2){
            ans+=5;
        }
        else if(x<4 && y<4){
            ans+=4;
        }
        else if(x<6 && y<6){
            ans+=3;
        }
        else if(x<8 && y<8){
            ans+=2;
        }
        else{
            ans+=1;
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