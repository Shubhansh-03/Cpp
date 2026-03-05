#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i: a) cin >> i;

    int end = n;
    int ind, ind1;
    int f = 0;
    for(int i=0;i<n;i++){
        if(!f and a[i] == end){
            end--;
        }
        else if(!f){
            ind = i;
            f = 1;
        }
        if(f and a[i] == end){
            ind1 = i;
        }
    }
    if(f){
        reverse(a.begin()+ind, a.begin()+ind1+1);
    }
    for(auto i: a) cout << i << " ";
    cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
