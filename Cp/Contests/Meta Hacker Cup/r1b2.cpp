#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

vector<int> prime(1e8, 1);

void primer(){
    for(int i=2;i<=1e8;i++){
        if(prime[i]){
            for(int j=2;i*j<=1e8;j++){
                prime[i*j] = 0;
            }
        }
    }
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << n << endl;

}

void main_() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    primer();
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
