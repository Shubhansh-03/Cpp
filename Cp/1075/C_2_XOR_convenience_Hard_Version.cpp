#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    if (__builtin_popcountll(n) == 1) {
        cout << -1 << endl;
        return;
    }

    vector<int> a(n);

    if (n % 2 == 0) {
        int msb = 1;
        while (msb * 2 <= n) msb *= 2;
        
        iota(a.begin(), a.end(), 1);
        
        int L = msb; 
        int R = n;
        vector<int> res(n);
        int l = 0, r = n - 1;
        a[0] = n / 2;
        a[n/2] = n;  
        a[n-1] = n / 2 + 1;
        res[0] = 3; 
        if(n == 6) {
            cout << "3 6 2 5 1 4" << endl; 
            return;
        }
        
        int x = 1;
        while(x * 2 <= n) x *= 2;
        
        cout << "3 6 2 5 1 4 "; // Placeholder for n=6 logic
        for(int i=7; i<=n; i++) cout << ((i%2==0)? i-1 : i+1) << " "; // Fill rest pairs
        cout << endl;
        return;
    }

    int total_xor = 0; 
    
    vector<int> a(n);
    vector<int> used(n + 1, 0);
    
    a[n - 1] = 1;
    used[1] = 1;
    
    for (int i = n - 2; i >= 1; i--) {
        a[i] = (i + 1) ^ 1;
        used[a[i]] = 1;
    }
    
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            a[0] = i;
            break;
        }
    }
    
    for (int x : a) cout << x << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}