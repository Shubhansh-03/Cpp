#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007


int findsum(int a, int b){
    a++; b++;
    int bothand, bothor;
    cout << "and " << a << " " << b << " " << endl;
    cout.flush();
    cin >> bothand;

    cout << "or " << a << " " << b << " " << endl;
    cout.flush();
    cin >> bothor;

    int sum = bothand + bothor;
    return sum;
}

int findnum(int x, int a){
    x++;
    int sum = findsum(x, 0);
    int num = sum - a;
    return num;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    
    int ab = findsum(0, 1);
    int bc = findsum(1, 2);
    int ac = findsum(0, 2);

    int first = (ab + ac - bc)/2;

    vector<int> ans;
    ans.push_back(first);
    ans.push_back(ab-ans[0]);
    ans.push_back(bc-ans[1]);
    for(int i=3;i<n;i++){
        int num = findnum(i, ans[0]);
        ans.push_back(num);
    }
    sort(ans.begin(), ans.end());
    cout << "finish " << ans[k-1] << endl;
    cout.flush();
}
int32_t main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
