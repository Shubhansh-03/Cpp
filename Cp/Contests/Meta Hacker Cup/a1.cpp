#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve() {
    int n, m;
    cin >> n >> m;
    if(n<m){
        cout << "NO" << endl;
    }
    else if(n <= 2*m-2){
        cout << "YES\n";
    }
    else {
        if(n&1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }

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
    for(int t=1;t<=test;t++){
        cout << "Case #" << t << ": ";
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
