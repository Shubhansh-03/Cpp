// ((()))()()()()
// (((())))
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f = 0;
    int close = 0;
    int open = 0;
    vector<int> pref(n, 0), suff(n, 0);
    vector<int> o, c;

    for(int i=0;i<n;i++){
        if(s[i] == '('){
            open++;
            o.push_back(i);
        }
        pref[i] = open;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i] == ')'){
            close++;
            c.push_back(i);
        }
        suff[i] = close;
    }

    int ans = -1;
    for(int i=0;i<n;i++) {
        if(s[i] == ')') {
            
            auto it = upper_bound(o.begin(), o.end(), i);

            if(it != o.end()) {
                int ind = *it;
                int diff = ind - i;
                int lop = (i>0)? pref[i-1] : 0;
                if((n/2-diff) >= (lop+1)) {
                    ans = max(ans, n-2*diff);
                }
            }
        }
    }
    cout << ans << endl;
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
