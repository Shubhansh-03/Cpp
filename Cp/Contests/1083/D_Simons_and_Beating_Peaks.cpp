#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int segment(vector<int>& a) {
    if (a.empty()) return 0;
    int n = a.size();
    
    vector<int> lt(n);
    vector<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.back() < a[i]){
            st.pop_back();
        }
        st.push_back(a[i]);
        lt[i] = st.size();
    }
    vector<int> rt(n);
    st.clear();
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.back() < a[i]){
            st.pop_back();
        }
        st.push_back(a[i]);
        rt[i] = st.size();
    }
    int maxl = 0;
    for(int i=0;i<n;i++){
        maxl = max(maxl, lt[i] + rt[i]-1);
    }
    return maxl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int pos = -1;
    int val = -1;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] > val){
            val = a[i];
            pos = i;
        }
    }

    vector<int> l, r;
    for(int i=0;i<pos;i++) l.push_back(a[i]);
    for(int i=pos+1;i<n;i++) r.push_back(a[i]);

    int kl = segment(l);
    int kr = segment(r);
    int maxk = 1 + max(kl, kr);

    cout << n - maxk << "\n";
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
