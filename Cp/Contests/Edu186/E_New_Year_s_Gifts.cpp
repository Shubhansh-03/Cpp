#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for(auto& i: a) cin >> i;
    sort(a.begin(), a.end()); 

    vector<vector<int>> l(n, vector<int>(3));
    for (int i = 0; i < n; ++i) {
        cin >> l[i][0] >> l[i][1] >> l[i][2];
    }

    sort(l.rbegin(), l.rend());
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> g;

    int c = m-1; 

    for(int i=0;i<n;i++){
        while(c>=0 && a[c]>=l[i][0]){
            c--;
        }
        int diff = l[i][2] - l[i][1];
        if(pq.size() < m-c-1){
            pq.push(diff);
        } 
        else{
            if(!pq.empty() && diff>pq.top()){
                pq.push(diff);
                g.push_back(pq.top()); 
                pq.pop();
            }
            else {
                g.push_back(diff);
            }
        }
    }
    int sum = 0;
    for(auto i: l){
        sum += i[1];
    }
    int curr = k-sum;
    int ans = pq.size();
    sort(g.begin(), g.end());

    for (auto i: g){
        if (curr>=i){
            curr-=i;
            ans++;
        } 
        else{
            break;
        }
    }
    cout << ans << "\n";    
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
