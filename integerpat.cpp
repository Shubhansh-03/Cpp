#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// bool isSafe(vector<int> visit, int n){
    
// }
void why(int n, vector<vector<int>>& solve, vector<int> nums, vector<int> visit) {
    // cout << "hehe";
    if(visit[n]==0){
        nums.push_back(n);
        solve.push_back(nums);
        nums.pop_back();
    }


    for(int i=1;i<=n/2;i++){
        if(visit[i]==0){
            visit[i] = 1;
            nums.push_back(i);
            why(n-i, solve, nums, visit);
            visit[i] = 0;
            nums.pop_back();
        }
    }
}
void solve()
{
    int n = 8;
    // int k = 2;
    vector<vector<int>> solve;
    vector<int> visit(n+1,0);
    vector<int> nums;
    why(n, solve, nums, visit);
    
    for(int i=0;i<solve.size();i++){
        for(int j=0;j<solve[i].size();j++){
            cout << solve[i][j] << "+";
        }
        cout << endl;
    }
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}