#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve() {
    int n;
    cin >> n;
    vector<int> l(n);
    for(auto& i: l) cin >> i;

    sort(l.rbegin(), l.rend());
    vector<long long> odds, evens;
    for(auto i: l){
        if(i%2){
            odds.push_back(i);
        }
        else{
            evens.push_back(i);
        }
    }

    vector<long long> prefe(evens.size() + 1, 0);
    for (int i=0;i<evens.size();++i) {
        prefe[i + 1] = prefe[i] + evens[i];
    }

    for (int k = 1; k <= n; ++k) {
        if (odds.empty()) {
            cout << "0 ";
            continue;
        }

        int maxy = min((int)evens.size(), k - 1);

        if (maxy%2 != (k-1)%2) {
            maxy--;
        }
        if (maxy<0) {
            cout << "0 ";
            continue;
        }

        int nodds = k- maxy;
        if (nodds>odds.size()) {
            cout << "0 ";
        } else {
            int score = odds[0] + prefe[maxy];
            cout << score << " ";
        }
    }
    cout << "\n";
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
