#include <bits/stdc++.h>
using namespace std;
int matrixMultiplication(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int len = 2; len < n; len++)
    {
        for (int i = 0; i < n - len; i++)
        {
            int j = i + len;
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; k++)
            {
                int cost = dp[i][k] + dp[k][j] + arr[i] * arr[k] * arr[j];
                dp[i][j] = min(dp[i][j], cost);
            }
            // for(int x=0;x<n;x++){
            //     for(int y=0;y<n;y++){
            //         cout << dp[x][y] << " ";
            //     }
            //     cout << endl;
            // }
            // cout << endl;
        }
    }
    return dp[0][n - 1];
}
int main()
{
    vector<int> arr = {2, 1, 3, 4, 5, 9};
    cout << matrixMultiplication(arr);
    return 0;
}