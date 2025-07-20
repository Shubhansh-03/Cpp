/*Li Hua has a pattern of size n×n
, each cell is either blue or red. He can perform exactly k
 operations. In each operation, he chooses a cell and changes its color from red to blue or from blue to red. Each cell can be chosen as many times as he wants. Is it possible to make the pattern, that matches its rotation by 180∘
?

Suppose you were Li Hua, please solve this problem.

Input
The first line contains the single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains two integers n,k
 (1≤n≤103,0≤k≤109
) — the size of the pattern and the number of operations.

Each of next n
 lines contains n
 integers ai,j
 (ai,j∈{0,1}
) — the initial color of the cell, 0
 for blue and 1
 for red.

It's guaranteed that sum of n
 over all test cases does not exceed 103
.

Output
For each set of input, print "YES" if it's possible to make the pattern, that matches its rotation by 180∘
 after applying exactly k
 of operations, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> l(n, vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> l[i][j];
        }
    }
    int check = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(l[i][j]!=l[n-1-i][n-1-j]){
                check++;
            }
        }
    }
    if(k>=check/2){
        // cout << "YES" << endl;
        if(n%2==1){
            cout << "YES" << endl;
        }
        else if(k==check/2){
            cout << "YES" << endl;
        }
        else if((k-check/2)%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        // if(n==2 && k==1){
        //     cout << n << " " << k << endl;
        //     for(int i=0;i<n;i++){
        //         for(int j=0;j<n;j++){
        //             cout << l[i][j] << " ";
        //         }
        //         cout << endl;
        //     }
        // }
    }
    else{
        cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    ll t = test;
    while(test--)
    {
        // cout << t-test << " ";
        solve();
    }
    return 0;
}