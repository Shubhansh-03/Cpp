#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int finder(vector<vector<int>> l, int search, int s, int n){
    for(int i=0;i<n;i++){
        if(l[i][s]==search){
            return i;
        }
    }
    return -1;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> l(n, vector<int>(m,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> l[i][j];
        }
        sort(l[i].begin(), l[i].end());
    }
    vector<int> p;
    int search = 0;
    int f = 1;
    for(int i=0;i<n;i++){
        p.push_back(finder(l, search, 0, n));
        if(p[i]<0){
            // cout << "hehe" << i;
            f = 0;
            break;
        }
        int x = search; 
        for(int j=0;j<m;j++){
            if(l[p[i]][j]!=x){
                f = 0;
                break;
            }
            x+=n;
            if(!f) break;
        }
        search++;
    }
        if(f){
            for(int i=0;i<n;i++){
                cout << p[i]+1 << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    

    // printf("hehe");
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
