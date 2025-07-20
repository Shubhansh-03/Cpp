/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<int> l(n);
    int sum = 0;
    for(auto& i: l){
        cin >> i;
        sum+=i;
    }
    if(sum<s){
        cout << "-1\n";
        return;
    }
    else if(sum==s){
        cout << "0\n";
        return;
    }
    int sub = sum-s;
    ll ans, temp=0;
    for(int i=0;i<n;i++){
        temp += l[i];
        if(temp==sub){
            ans = i+1;
            break;
        }
    }
    ll e = n-1, b = ans-1;
    while(l[e]!=1){
        e--;
    }
    while(b>=0 && e>=b){
        // cout << b << " " << e << endl;
        b--;
        while(b>=0 && l[b]!=1){
            b--;
        }
        ans = min(ans, (b+1+(n-e)));
        e--;
        while(e>=b && l[e]!=1){
            e--;
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