/*
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    if(n==0){
        cout << "YES\n";
        return;
    }
    vector<int> l;
    int x = n;
    while(x!=0){
        l.push_back((x&1));
        x = x>>1;
    }
    int size = l.size()-1;
    int i=0;
    while(size>=i){
        if(size == l.size()-1 && l[size]==1 && l[i]==0){
            i++;
            continue;
        }
        if(l[i]!=l[size]){
            cout << "NO\n";
            return;
        }
        if(size==i){
            if(l[i]==1){
                cout << "NO\n";
                return;
            }
        }
        size--;
        i++;
    }
    cout << "YES\n";

}
int32_t main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}