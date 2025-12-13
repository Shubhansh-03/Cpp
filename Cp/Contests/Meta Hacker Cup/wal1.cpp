#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int& x : a) cin >> x;

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int m;
    if (!(cin >> m)) return 0;

    int mi = 2e9, ma = -2e9;

    while (m--) {
        int s;
        cin >> s;
        int r = distance(upper_bound(a.begin(), a.end(), s), a.end()) + 1;
        
        cout << r << " ";
        if (r < mi) mi = r;
        if (r > ma) ma = r;
    }

    cout << "\n" << mi << " " << ma;

    return 0;
}