#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int bintodec(string bin){
    int ans = 0;
    for(auto i: bin){
        if(i == '1'){
            ans += 1;
        }
        ans <<= 1;
    }
    return ans;
}
string dectobin(int n, int x){
    string ans = "";
    while(x--){
        ans = (char)((n&1) + '0') + ans;
    }
    return ans;
}

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> w(n);
    for(auto& i: w) cin >> i;

    vector<string> a(m);
    for(auto& i: a) cin >> i;
    set<string> map;

    int range = 1<<n;
    vector<int> l(range, 0);
    for(auto i: a){
        int num = bintodec(i);
        l[num]++;
        map.insert(i);
    }
    vector<vector<int>> comp(range, vector<int> (range, 0));

    for(auto i: map){
        int num1 = bintodec(i);
        for(int j=0;j<range;j++){
            string num = dectobin(j, n);
            int score = 0;
            for(int k=0;k<n;k++){
                if(num[k] == i[k]){
                    score += w[j];
                }
            }
            comp[j][num1] = score; 
        }
    }

    while(q--){
         
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
