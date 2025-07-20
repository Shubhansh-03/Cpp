/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> l(n);
    for (auto &i : l)
    {
        cin >> i;
    }
    if(l[n-1]>=0){
        if(l[n-2]<=l[n-1]){
            cout << n-2 << "\n";
            for(int i=0;i<n-2;i++){
                cout << i +1 << " " << n-1 << " " << n << "\n";
            }
        }
        else{
            cout << "-1\n";
        }
    }
    else{
        for(int i=n-2;i>=0;i--){
            if(l[i]>l[i+1]){
                cout << "-1\n";
                return;
            }
        }
        cout << "0\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}