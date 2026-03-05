#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(a[i]);
        if(i>=k){
            cout << pq.top() << " ";
            pq.pop();
        }
    }
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
