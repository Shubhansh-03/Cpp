#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> l(m, vector<int> (2, 0));
    for(auto& i: l){
        int a, b;
        cin >> a >> b;
        i[0] = min(a, b), i[1] = max(a, b);
    }
    sort(l.begin(), l.end());

    // int start = 0, end = n+1;
    // for(int i=0;i<m;i++){
    //     start = max(start, l[i][0]);
    //     end = min(end, l[i][1]);
    // }
    // int ans = (n*(n+1))/2-((start)*(n-end+1));
    // if(start == end) ans+=1;
    // cout << ans << endl;

    int start = 0, e = n-1;
    int t = 0;
    for(int i=0;i<m;i++){
        t += (l[i][0] - start)*(n-l[i][1]+1);
        start = l[i][0];
    }
    int ans = (n*(n+1))/2 - t;
    cout << ans << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
