/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool compare1(const std::vector<ll>& row1, const std::vector<ll>& row2) {
    return row1[0] < row2[0]; // Sort based on the first element of each row
}
bool compare2(const std::vector<ll>& row1, const std::vector<ll>& row2) {
    return row1[1] < row2[1]; // Sort based on the first element of each row
}
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> l(n, vector<ll> (2));
    for(ll i=0;i<n;i++){
        cin >> l[i][0] >> l[i][1];
    }

    if(n==1){
        cout << 1 << endl;
        return;
    }
    else if(n==2){
        cout << 2 << endl;
        return;
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