#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    int fact = 0;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            int t = n;
            while(t%i==0){
                t/=i;
                fact++;
            }
            if(t == 1) fact--;
            if(fact >= 3){
                cout << min(3ll, fact) << endl;
                return;
            }
        }
    }
    cout << min(3ll, fact+1) << endl;    

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
