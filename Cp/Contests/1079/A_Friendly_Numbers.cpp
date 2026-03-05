#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int find(int n) {
    int sum = 0;
    while (n) {
        int t = n % 10;
        sum += t;
        n /= 10;
    }
    return sum;
}
void solve() {
    int n;
    cin >> n;
    int sum = 0;
    int x = n;
    while (n) {
        int t = n % 10;
        sum += t;
        n /= 10;
    }
    n = x;
    if (sum % 9 == 0) {
        int c = 0;
        for (int i = 0; i <= 90; i++) {
            int y = n + i;
            if (y - find(y) == n) {
                c++;
            }
        }
        cout << c << endl;
    } else {
        cout << 0 << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
