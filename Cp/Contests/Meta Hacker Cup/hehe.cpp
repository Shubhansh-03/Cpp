#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve() {
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    int maxdiff = 0;
    for(int i=1;i<n;i++){
        maxdiff = max(maxdiff, abs(l[i]-l[i-1]));
    }
    cout << maxdiff << endl;
}

void main_() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test = 1;
    cin >> test;
    int num = 1;
    while (test--) {
        cout << "Case #" << num++ << ": ";
        solve();
    }
}

static void run_main() {
    main_();
    exit(0);
}

int32_t main() {
    size_t stsize = 1024 * 1024 * 1024; // 1 GiB stack
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %0, %%rsp\n"
        "call *%1\n"
        :
        : "r"(send), "r"(run_main));
    return 0;
}
