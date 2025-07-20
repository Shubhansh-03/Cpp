/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> l(n);
    for(auto& i: l){
        cin >> i;
    }
    vector<vector<ll>> fb(n, vector<ll> (2));
    for(int i=0;i<n;i++){
        cin >> fb[i][0] >> fb[i][1];
    }
    ll h=0;
    ll hb=0;
    ll c=0;
    vector<ll> ans;
    for(int i=0;i<n;i++){
        if(l[i]==0){
            // ans.push_back(0);
        }
        else if(l[i]==1){
            // ans.push_back(1);
            h++;
        }
        else{
            hb++;
        }
        if(h<=fb[i][1]){
            if(h<fb[i][0]){
                if((h+hb)>=fb[i][0]){
                    ll temp = fb[i][0]-h;
                    c += temp;
                    h += temp;
                    hb -= temp;
                    int j = i;
                    while(temp!=0){
                        if(l[j]==-1){
                            l[j] = 1;
                            temp--;
                        }
                        j--;
                    }
                }
                else{
                    cout << "-1\n";
                    return;
                }
            }
            hb = min(hb, (fb[i][1]-fb[i][0]));
        }
        else{           
            cout << "-1\n";
            return ;
        }
    }
    for(int i=0;i<n;i++){
        if(l[i]==-1){
                cout << "0 ";
        }
        else{
            cout << l[i] << " ";
        }
    }
    cout << endl;
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