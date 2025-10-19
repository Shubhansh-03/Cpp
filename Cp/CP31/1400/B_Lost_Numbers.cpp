/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    vector<int> q;
    for(int i=0;i<2;i++){
        int temp;
        cout << "? " << i+1 << " " << i+2 << endl;
        fflush(stdout);
        cin >> temp;
        q.push_back(temp);
    }
    for(int i=3;i<5;i++){
        int temp;
        cout << "? " << i+1 << " " << i+2 << endl;
        fflush(stdout);
        cin >> temp;
        q.push_back(temp);
    }
    int qu = 0;
    vector<int> ans(6);
    for(int i=0;i<6;i+=3){
        int mid = __gcd(q[qu], q[qu+1]);
        int first = q[qu] / mid;
        int second = q[qu+1] / mid;
        if(first == 21){
            first = 42;
            mid = 8;
        }
        else if(second == 21){
            second = 42;
            mid = 8;
        }
        qu+=2;
        ans[i] = first;
        ans[i+1] = mid;
        ans[i+2] = second;
    }
    for(auto i: ans){
        cout << i << " ";
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}