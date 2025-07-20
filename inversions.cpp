#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int merge(vector<int> &l, int s, int mid, int e){
    int n1 = mid-s+1;
    int n2 = e-mid;

    vector<int> L(n1);
    vector<int> R(n2);

    for(int i=0;i<n1;i++){
        L[i] = l[s+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = l[mid+i+1];
    }

    int count=0;
    int i=0, j=0,k = s;
    while(i<n1 && j<n2){
        if(L[i]>R[j]){
            count += n1-i;
            l[k++] = R[j++];
        }
        else{
            l[k++] = L[i++];
        }
    }
    while(i<n1){
        l[k++] = L[i++];
    }
    while(j<n2){
        l[k++] = R[j++];
    }
    return count;
}
int mergesort(vector<int> &l, int s, int e, int &count){
    int ct = 0;
    if(s>=e){
        return count;
    }

    mergesort(l, s, (s+e)/2, count);
    mergesort(l, (s+e)/2+1, e, count);
    count += merge(l, s, (s+e)/2, e);
}
void solve()
{
    int n=7;
    vector<int> l = {2,3,8,6,1,4};
    int count = 0;
    mergesort(l, 0, 5, count);
    cout << count;
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}