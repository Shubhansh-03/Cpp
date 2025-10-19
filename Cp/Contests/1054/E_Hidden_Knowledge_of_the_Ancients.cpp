/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve() {
    int n, k, l, r;
    cin >> n >> k >> l >> r;
    vector<int> a(n);
    for (auto& i : a) {
        cin >> i;
    }
    vector<int> r1(n, n);
    unordered_map<int, int> f1;
    int p1 = 0;
    for (int i = 0; i < n; ++i) {
        while (p1 < n && f1.size() < k) {
            f1[a[p1]]++;
            p1++;
        }
        if (f1.size() == k) {
            r1[i] = p1 - 1;
        }
        f1[a[i]]--;
        if (f1[a[i]] == 0) {
            f1.erase(a[i]);
        }
    }
    vector<int> r2(n, n);
    unordered_map<int, int> f2;
    int p2 = 0;
    for (int i = 0; i < n; ++i) {
        while (p2 < n && f2.size() < k + 1) {
            f2[a[p2]]++;
            p2++;
        }
        if (f2.size() == k + 1) {
            r2[i] = p2 - 1;
        }
        f2[a[i]]--;
        if (f2[a[i]] == 0) {
            f2.erase(a[i]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (r1[i] == n) continue;

        int start_c = max(r1[i], i + l - 1);
        int end_c = min(r2[i] - 1, i + r - 1);

        if (start_c <= end_c) {
            ans += (end_c - start_c + 1);
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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