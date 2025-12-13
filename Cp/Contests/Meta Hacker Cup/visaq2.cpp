#include <vector>
#include <set>
#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int solution(vector<int> h, int v) {
    int r = INT_MAX;
    multiset<int> s;
    for (int i = v; i < h.size(); ++i) {
        s.insert(h[i - v]);
        auto it = s.lower_bound(h[i]);
        if (it != s.end()) r = min(r, *it - h[i]);
        if (it != s.begin()) r = min(r, h[i] - *prev(it));
    }
    return r;
}

int main() {
    cout << solution({1, 5, 4, 10, 9}, 3) << endl;
    cout << solution({3, 10, 5, 8}, 1) << endl;
    return 0;
}