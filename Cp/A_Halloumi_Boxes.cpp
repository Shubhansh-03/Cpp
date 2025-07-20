#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int f=0;
    for(int i=1;i<n;i++){
        if(l[i]<l[i-1]){
            f=1;
            break;
        }
    }
    if(!f){
        cout << "YES" << endl;
        return ;
    }
    if(k>1){
        cout << "YES" << endl;
        // cout << 
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
    while(test--)
    {
        solve();
    }
    return 0;
}