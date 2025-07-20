#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
// #include <bits/stdc++.h>
using namespace std;

struct interval{
    int start;
    string end;
};
void insertion(vector<int> &vow, vector<string> &l, int n, int m){
    for(int i=0;i<n-1;i++){
        int min = vow[i];
        int index;
        for(int j=i+1;j<n;j++){
            if(vow[j]<min){
                min = vow[j];
                index = j;
            }
        }
        int temp = vow[index];
        string temp1 = l[index];
       
        vow[index] = vow[i];
        l[index] = l[i];
       
        vow[i] = temp;
        l[i] = temp1;
    }    
}

bool cmpl(interval i, interval j){
    return (i.start < j.start);
}
void calcvow(vector<int> &vow, vector<string> l, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(l[i][j]=='a')
                vow[i]++;
            if(l[i][j]=='e')
                vow[i]++;
            if(l[i][j]=='i')
                vow[i]++;
            if(l[i][j]=='o')
                vow[i]++;
            if(l[i][j]=='u')
                vow[i]++;
        }
    }
}
int main(){
    // cout << " hehe";
    clock_t tstart = clock();
    int n, m;
    cin >> m >> n;
    vector<string> l(n, "");
    for(int i=0;i<n;i++){
        char c;
        for(int j=0;j<m;j++){
        cin >> c;
        // cin >> l[i];
        l[i]+=c;
        }
    }
    vector<int> vow(n,0);
    sort(l.begin(), l.end());
    calcvow(vow, l, n, m);
    vector<interval> v(n);
    for(int i=0;i<n;i++){
        v[i].start = vow[i];
        v[i].end = l[i];
    }
    sort(v.begin(),v.end(),cmpl); //{Used two methods to sort the array, both didn't pass private test case}
    insertion(vow, l, n, m);
    double time1 = (double)(clock()-tstart);
    cout << "Time: " << time1 << endl;
    // for(int i=0;i<n;i++)
    //     cout << l[i] << endl;  
}