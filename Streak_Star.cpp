#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> l(n,0);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int len = 1;
    int maxlen = 0;
    int use = 1;
    int index = 0;
    for(int i=1;i<n;i++){
        if(l[i]>=l[i-1]){
            len++;
        }
        else if(use==1){
            if(l[i]*x>=l[i-1]){
                len++;
                use--;
            }
            else{
                if(index>0 && use==1 && l[index]*x>=l[index-1]){
                    len++;
                }
                if(len >= maxlen){
                    maxlen = len;
                }
                index= i;
                len = 1;
            }
        }
        else{
            // maxlen = max(maxlen, len);
            if(index>0 && use==1 && l[index]*x>=l[index-1]){
                len++;
            }
            if(len >= maxlen){
                maxlen = len;
            }
            index = i;
            len = 1;
            use = 1;
        }
    }
    if(index>0 && use==1 && l[index]*x>=l[index-1]){
        len++;
    }
    maxlen = max(maxlen, len);
    if(maxlen<=n)
    cout << maxlen << endl;
    else
    cout << n << endl;
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