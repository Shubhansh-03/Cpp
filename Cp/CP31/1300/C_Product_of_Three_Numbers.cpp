#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int temp = n;
    int count = 0;
    map<int, int> ans;
    for(int i=2;i*i<=n;i++){
        if(count == 2){
            break;
        }
        if(temp%i == 0){
            temp/=i;
            count++;
            ans[i]++;
        }
    }
    if(count == 2){
        if(ans[temp] == 0 and temp!=1){
            cout << "YES\n";
            for(auto pair: ans) if(pair.second > 0) cout << pair.first << " ";
            cout << temp << endl;
        }
        else{
            cout << "NO\n";
        }
    }
    else{
        cout << "NO\n";
    }
    
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // for(int i=2;i<=N;i++){
        // if(!pfac[i].empty()){
        //     continue;
        // }
        // for(int j=i;j<=N;j+=i){
        //     pfac[j].push_back(i);
        // }
        // cout << "hehe";
    // }

    // for(auto i: pfac){
    //     for(auto j: i) cout << j << " ";
    //     cout << endl;
    // }

    int test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
