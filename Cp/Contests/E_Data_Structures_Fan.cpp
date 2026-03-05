#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;
    string s;
    cin >> s;

    int one = 0, zero = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            zero ^= a[i];
        }
        else{
            one ^= a[i];
        }
    }
    vector<int> pref(n+1, 0);
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i] ^ a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int op;
        cin >> op;
        if(op == 1){
            int l, r;
            cin >> l >> r;
            int num = pref[r] ^ pref[l-1];
            one ^= num;
            zero ^= num;
        }
        else{
            int g;
            cin >> g;
            if(g == 0){
                cout << zero << " ";
            }
            else{
                cout << one << " ";
            }
        }
    }
    cout << endl;
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
