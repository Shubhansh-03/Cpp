#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int valid(vector<int>& a, vector<int>& b){
    int n = a.size();
    int ans = 0;
    for (int i=0;i<n;i++) {
        int f = 0;
        for (int j=0;j<n;j++) {
            if (a[j]>=b[(j+i)%n]) {
                f = 1;
                break;
            }
        }
        if (!f) {
            ans++;
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;
    for(auto& i: c) cin >> i;


    int num1 = valid(a, b);
    int num2 = valid(b, c);

    cout << num1*num2*n << endl;
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
