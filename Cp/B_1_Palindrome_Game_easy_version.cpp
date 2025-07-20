/*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll b = 0, e = n - 1;
    ll zero = 0, upz = 0;
    while (b < e)
    {
        char x = s[b];
        char y = s[e];
        if (x == y)
        {
            if (x == '0')
                zero += 2;
        }
        else
        {
            zero++;
            upz++;
        }
        b++;
        e--;
    }
    int mid = 0;
    if (n % 2 == 1)
    {
        if (s[n / 2] == '0')
            mid = 1;
    }
    ll alice = 0, bob = 0;
    if (upz == 0)
    {
        if (mid)
        {
            alice += 1;
            bob += zero / 2 + ((zero / 2) % 2 == 1 ? 1 : 0);
            alice += zero / 2 + ((zero / 2) % 2 == 1 ? -1 : 0);
        }
        else
        {
            bob += zero / 2 + ((zero / 2) % 2 == 1 ? -1 : 0);
            alice += zero / 2 + ((zero / 2) % 2 == 1 ? 1 : 0);
        }
        if (alice > bob)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "ALICE" << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;

while(n<0){
    for(int i=0;i<n;i++){
        int l = neat hehe + 1;
        
    }
}