#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

vector<int> solution(vector<int> m, vector<vector<int>> q) {
    vector<int> r;
    map<int, pair<int, int>> d;
    int c = 1;
    for (auto x : q) {
        if (x[0] == 0) {
            int l = x[1], s = -1;
            for (int i = 0; i < m.size(); i += 8) {
                if (i + l > m.size()) break;
                bool f = true;
                for (int j = 0; j < l; ++j) {
                    if (m[i + j]) {
                        f = false;
                        break;
                    }
                }
                if (f) {
                    s = i;
                    break;
                }
            }
            if (s != -1) {
                for (int j = 0; j < l; ++j) m[s + j] = 1;
                d[c++] = {s, l};
                r.push_back(s);
            } else r.push_back(-1);
        } else {
            if (d.count(x[1])) {
                auto p = d[x[1]];
                for (int j = 0; j < p.second; ++j) m[p.first + j] = 0;
                r.push_back(p.second);
                d.erase(x[1]);
            } else r.push_back(-1);
        }
    }
    return r;
}

int main() {
    vector<int> m = {0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    // Added the missing [0, 1] query that appears in the image trace but not the list
    vector<vector<int>> q = {
        {0, 2}, 
        {0, 1}, 
        {0, 1}, // This one fails (returns -1)
        {1, 1}, 
        {0, 3}, 
        {1, 4}, 
        {0, 4}
    };
    
    vector<int> res = solution(m, q);
    
    for (int i : res) cout << i << " ";
    cout << endl;
    
    return 0;
}