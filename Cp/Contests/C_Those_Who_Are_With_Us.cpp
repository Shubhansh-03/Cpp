/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int rows, cols;
  cin >> rows >> cols;

  multiset<int> valueSet;
  int globalMax = 0;

  vector<vector<int>> matrix(rows, vector<int>(cols, 0));
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < cols; col++) {
      cin >> matrix[row][col];
      globalMax = max(globalMax, matrix[row][col]);
    }
  }

  int maxCount = 0;
  map<int, int> rowMaxCount, colMaxCount;

  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < cols; col++) {
      valueSet.insert(matrix[row][col]);
      if (matrix[row][col] == globalMax) {
        rowMaxCount[row]++;
        colMaxCount[col]++;
        maxCount++;
      }
    }
  }

  int chosenRow = -1, chosenCol = -1;
  for (const auto& [rIdx, rFreq] : rowMaxCount) {
    for (const auto& [cIdx, cFreq] : colMaxCount) {
      if (rFreq + cFreq - (matrix[rIdx][cIdx] == globalMax) >= maxCount) {
        chosenRow = rIdx;
        chosenCol = cIdx;
        break;
      }
    }
    if (chosenRow != -1) break;
  }

  if (chosenRow == -1 && chosenCol == -1) {
    cout << globalMax << endl;
    return;
  }

  // Decrease entire column at chosenCol
  for (int row = 0; row < rows; row++) {
    valueSet.erase(valueSet.find(matrix[row][chosenCol]));
    matrix[row][chosenCol]--;
    valueSet.insert(matrix[row][chosenCol]);
  }

  // Decrease entire row at chosenRow (excluding intersection)
  for (int col = 0; col < cols; col++) {
    if (col == chosenCol) continue;
    valueSet.erase(valueSet.find(matrix[chosenRow][col]));
    matrix[chosenRow][col]--;
    valueSet.insert(matrix[chosenRow][col]);
  }

  cout << (*valueSet.rbegin()) << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}