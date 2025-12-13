#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> a, vector<int> b, int m) {
    int t = 0;
    while (m--) {
        auto i = lower_bound(a.begin(), a.end(), t);
        t = *i + 100;
        auto j = lower_bound(b.begin(), b.end(), t);
        t = *j + 100;
    }
    return t;
}
int main(){
    cout << solution({109, 200, 500}, {99, 210, 600}, 2);
}