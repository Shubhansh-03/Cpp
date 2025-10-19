/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int recur(vector<int> l, int i){
    int n = l.size();
    if(i==n){
        return 1;
    }

    int send = 0;
    if(l[i] == 0){
        l[i] = l[i-1]+1;
        send += recur(l, i+1);
        l[i] = l[i-1]-1;
        send += recur(l, i+1);
        l[i] = l[i-1];
        send += recur(l, i+1);
    }
    else{
        send = recur(l, i+1);
    }
    return send;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> l(n);
    for(auto& i: l){
        cin >> i;
    }
    int ans = recur(l, 0);
    cout << ans << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}