#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int n1 = -1, n2 = -1, c1=0, c2=0;
    for(int i=0;i<n;i++){
        if(n1==-1){
            n1=l[i];
            c1++;
        }
        else if(n2==-1){
            if(l[i]==n1){
                c1++;
            }
            else{
                n2=l[i];
                c2++;
            }
        }
        else{
            if(n1==l[i]){
                c1++;
            }
            else if(n2==l[i]){
                c2++;
            }
            else{
                cout << "No" << endl;
                return;
            }
        }
    }
    if(n2==-1){
        cout << "Yes" << endl;
    }
    else if(c1==n/2 || c2==n/2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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