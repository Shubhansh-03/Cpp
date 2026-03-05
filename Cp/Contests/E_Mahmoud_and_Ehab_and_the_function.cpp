#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n), b(m);
    for(auto& i: a) cin >> i;
    for(auto& i: b) cin >> i;

    int sum = 0;
    for(int i=0;i<n;i++){
        if(i%2){
            sum -= a[i];
        }
        else{
            sum += a[i];
        }
    }
    vector<int> st;
    int even = 0, odd = 0;
    for(int i=0;i<n;i++){
        if(i%2){
            odd += b[i];
        }
        else{
            even += b[i];
        }
    }

    st.push_back(even - odd);
    for(int i=n;i<m;i++){
        if((i-n)%2 == 0){
            even -= b[i-n];
            if(i%2){
                odd += b[i];
            }
            else{
                even += b[i];
            }
            st.push_back(odd - even);
        }
        else{
            odd -= b[i-n];
            if(i%2){
                odd += b[i];
            }
            else{
                even += b[i];
            }
            st.push_back(even - odd);
        }
    }

    // for(auto i: st) cout << i << " ";
    sort(st.begin(), st.end());
    int end = st.size()-1;
    int ans = LLONG_MAX;

    auto it = lower_bound(st.begin(), st.end(), sum);

    if(it != st.end()) {
        ans = min(ans, abs(sum - *it));
    }

    if(it != st.begin()) {
        --it;
        ans = min(ans, abs(sum - *it));
    }
    cout << ans << endl;
    while(q--){
        int val, l, r;
        cin >> l >> r >> val;

        if((l-r+1) % 2){
            if((r-1)%2){
                sum -= val;
            }
            else{
                sum += val;
            }
        }
        ans = LLONG_MAX;
        auto it = lower_bound(st.begin(), st.end(), sum);
        if(it != st.end()) {
            ans = min(ans, abs(sum - *it));
        }
        if(it != st.begin()) {
            --it;
            ans = min(ans, abs(sum - *it));
        }
        cout << ans << endl;
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
