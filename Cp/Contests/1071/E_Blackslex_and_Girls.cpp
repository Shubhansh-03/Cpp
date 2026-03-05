#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int sum = accumulate(l.begin(), l.end(), 0ll);
    if(sum > (x+y)){
        cout << "NO\n";
        return;
    }
    int n1 = 0, n2 = 0;
    int w1 = 0, w2 = 0;

    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            w1++;
            n1 += l[i]/2+1;
        }
        else{
            w2++;
            n2 += l[i]/2+1;
        }
    }

    if(x < n1 || y < n2){
        cout << "NO\n";
        return;
    }
    if(w1 == n || w2 == n){
        if(w1 == n && x < y+n){
            cout << "NO\n";
            return;
        }
        else if(w2 == n && y < x+n){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
