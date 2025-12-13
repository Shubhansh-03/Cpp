#include <bits/stdc++.h>
using namespace std;

int uniqueNumbers(int input1, int input2, int input3) {
    queue<int> q;
    unordered_set<int> visited;

    q.push(input1);
    visited.insert(input1);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if (x - input2 > 0 && visited.find(x - input2) == visited.end()) {
            visited.insert(x - input2);
            q.push(x - input2);
        }

        if (x - input3 > 0 && visited.find(x - input3) == visited.end()) {
            visited.insert(x - input3);
            q.push(x - input3);
        }
    }

    return visited.size();
}
int main(){
    int a = uniqueNumbers(10, 2, 5);
    cout << a << endl;
    return 0;
}