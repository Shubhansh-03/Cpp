#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> queries) {
    unordered_map<int, int> m;
    vector<int> ans;
    int mx = 0;
    for (int q : queries) {
        int l = 0;
        int r = 0;
        if (m.count(q - 1)) {
            l = m[q - 1];
        }
        if (m.count(q + 1)) {
            r = m[q + 1];
        }
        int len = l + r + 1;
        m[q - l] = len;
        m[q + r] = len;
        if (len > mx) {
            mx = len;
        }
        ans.push_back(mx);
    }
    return ans;
}

// vector<string> solution(vector<vector<string>> paragraphs, int width) {
//     vector<string> ans;
//     string border(width + 2, '*');
//     ans.push_back(border);
//     for (auto p : paragraphs) {
//         string cur = "";
//         for (string w : p) {
//             if (cur.empty()) {
//                 cur = w;
//             } else {
//                 if (cur.length() + 1 + w.length() <= width) {
//                     cur += " " + w;
//                 } else {
//                     int rem = width - cur.length();
//                     int left = rem / 2;
//                     int right = rem - left;
//                     ans.push_back("*" + string(left, ' ') + cur + string(right, ' ') + "*");
//                     cur = w;
//                 }
//             }
//         }
//         if (!cur.empty()) {
//             int rem = width - cur.length();
//             int left = rem / 2;
//             int right = rem - left;
//             ans.push_back("*" + string(left, ' ') + cur + string(right, ' ') + "*");
//         }
//     }
//     ans.push_back(border);
//     return ans;
// }

// int solution(int target, vector<int> stations) {
//     sort(stations.begin(), stations.end());
//     int pos = 0;
//     int ans = 0;
    
//     while (pos < target) {
//         int next = -1;
//         for (int s : stations) {
//             if (s >= pos) {
//                 next = s;
//                 break;
//             }
//         }
        
//         if (next == -1) {
//             ans += target - pos;
//             break;
//         }
        
//         ans += next - pos;
//         pos = next + 10;
//     }
    
//     return ans;
// }

int main(){

    vector<int> s = solution({1, 3, 0, 4});
    for(auto i: s){
        cout << i << endl;
    }
    return 1;
}