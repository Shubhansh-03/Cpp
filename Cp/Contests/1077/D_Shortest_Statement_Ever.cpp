#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int bintodec(string bin){
    int ans = 0;
    for(auto i: bin){
        if(i=='1'){
            ans += 1;
        }
        ans <<= 1;
    }
    return ans;
}
void solve()
{
    int a, b;
    cin >> a >> b;

    if((a & b) == 0){
        cout << a << " " << b << endl;
        return;
    }
    int x = a&b;
    string bin = "";
    int temp = x;
    while(temp!=0){
        bin = (char)((temp&1) + '0') + bin;
        temp = temp >> 1;
    }
    int p = 0;
    int last = 0;
    string ans = "0";
    for(int i=0;i<bin.size();i++){
        if(bin[i] == '1'){
            p = 1;
            ans += '0';
        }
        else{
            if(p){
                p = 0;
                ans += '1';
            }
            else{
                ans += '0';
                last = i;
            }
        }
    }
    if(p == 1){
        ans[last] = '1';
    }
    int num = bintodec(ans);
    
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
