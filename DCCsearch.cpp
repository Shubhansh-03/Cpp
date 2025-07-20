#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int divide(vector<int> l, int s, int e){
    if(s>=e){
        return l[s];
    }
    else if(e-s==1){
        return (l[e]>l[s]?l[e]:l[s]);
    }

    int ans = max(divide(l, s, (s+e)/2), divide(l, (s+e)/2+1, e));
    return ans;
}
void solve()
{
    // cout << "hehe";
    int n=6;
    cin >> n;
    vector<int> l = {114,311,17,1000,9000,500000};
    cout << divide(l, 0, 5);
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}