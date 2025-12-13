#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

bool canReachAll(const vector<int>& heights, int limit) {
    int n = heights.size();
    vector<bool> reachable(n, false);
    bool anyReachable = false;

    for (int i = 0; i < n; i++) {
        if (heights[i] <= limit) {
            reachable[i] = true;
            anyReachable = true;
        }
    }

    if (!anyReachable) return false;

    for (int i = 0; i < n - 1; i++) {
        int diff = abs(heights[i] - heights[i + 1]);
        int ground = heights[i + 1];
        if (min(diff, ground) <= limit && reachable[i]) {
            reachable[i + 1] = true;
        }
    }

    for (int i = n - 1; i >= 1; i--) {
        int diff = abs(heights[i] - heights[i - 1]);
        int ground = heights[i - 1];
        if (min(diff, ground) <= limit && reachable[i]) {
            reachable[i - 1] = true;
        }
    }

    for (bool r : reachable) {
        if (!r) return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int& h : heights) cin >> h;

    int low = 0, high = 1e9, answer = -1;
    while (low <= high) {
        int mid = (low + high) >> 1;
        if (canReachAll(heights, mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << answer << "\n";
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
