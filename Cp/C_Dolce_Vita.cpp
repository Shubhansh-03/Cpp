#include<bits/stdc++.h>

using namespace std;

#define int long long



void solve(){

    int n, x;

    cin>>n>>x;

    vector<int> a(n), pre(n+1);

    for(int i=0;i<n;i++){

        cin>>a[i];

    }

    sort(a.begin(), a.end());

    for(int i=0;i<n;i++){

        pre[i+1] = pre[i] + a[i];

    }

    



    int ans = 0;

    for(int i=1;i<=n;i++){

        if(pre[i] > x) break;

        int num = (x-pre[i])/i + 1;

         

        ans += num;

    }

    cout<<ans<<endl;

}



int32_t main(){

    int t;

    cin>>t;

    while(t--) solve();

}

