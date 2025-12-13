#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve(){
    int n; cin>>n;
    int q; cin>>q;
    string s; cin>>s;

    bool g = false;
    for(char c : s) {
        if(c == 'B') {
            g = true;
            break;
        }
    }

    vector<int> jmp(n);
    vector<int> nxt(n);

    if (g) { 
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                jmp[i] = 1; 
                nxt[i] = (i + 1) % n;
            } else { // s[i] == 'A'
                int k = 0;
                for (int j = 0; j < n; ++j) {
                    int current_idx = (i + j) % n;
                    if (s[current_idx] == 'A') {
                        k++;
                    } else {
                        break; 
                    }
                }
                jmp[i] = k;
                nxt[i] = (i + k) % n;
            }
        }
    }

    for(int i = 0; i < q; i++){
        int num; cin >> num;
        if(!g){
            cout << num << endl;
            continue; 
        }

        int cnt = 0;
        int curr = 0;

        while (num > 0) {
            if (s[curr] == 'A') {
                int k = jmp[curr];     
                int next_m = nxt[curr]; 
                
                if (num <= k) {
                    cnt += num;
                    num = 0;
                } else {
                    num -= k;
                    cnt += k;
                    curr = next_m;
                }
            } else {
                num >>= 1; 
                cnt++;
                curr = (curr + 1) % n;
            }
        }
        cout << cnt << endl;
    }
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
