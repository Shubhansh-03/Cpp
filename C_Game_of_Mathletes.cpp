#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n,0);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    sort(l.begin(),l.end());
    int sta = 0;
    int end = n-1;
    int c = 0;
    while(sta<end){
        if(l[sta]+l[end] == k){
            sta++;
            end--;
        }
        else if(l[end]>k-l[sta]){
            c++;
            end--;
        }
        else{
            c++;
            sta++;
        }
    }
    if(sta==end) c++;
    int score = n/2-c/2;
    cout << score << endl;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    // cout << "hehe";
    while(test--)
    {
        solve();
    }
    return 0;
}
