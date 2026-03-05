#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m;
    cin >> m;
    vector<int> usb;
    vector<int> ps;
    for(int i=0;i<m;i++){
        int temp; string t;
        cin >> temp >> t;
        if(t == "USB"){
            usb.push_back(temp);
        }
        else{
            ps.push_back(temp);
        }
    }
    sort(usb.begin(), usb.end());
    sort(ps.begin(), ps.end());
    int x = usb.size(), y = ps.size();
    int k = 0, ans = 0;
    int i1;
    for(i1=0;i1<x;i1++){
        if(a > 0){
            ans+= usb[i1];
            k++;
            a--;
        }
        else{
            break;
        }
    }
    int i2;
    for(i2 = 0;i2<y;i2++){
        if(b>0){
            ans+= ps[i2];
            k++;
            b--;
        }
        else{
            break;
        }
    }
    while(c>0 && i1<x && i2<y){
        if(usb[i1] < ps[i2]){
            ans += usb[i1];
            k++;
            i1++;
            c--;
        }
        else{
            ans += ps[i2];
            k++;
            i2++;
            c--;
        }
    }
    while(c>0 && i1<x){
            ans += usb[i1];
            k++;
            i1++;
            c--;
    }
    while(c>0 && i2<y){
            ans += ps[i2];
            k++;
            i2++;
            c--;
    }
    cout << k << " " << ans;
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
