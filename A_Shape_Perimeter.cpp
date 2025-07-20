#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        // vector<int> l(n);
        int temp1, temp2;
        int sum1 =0, sum2=0;
        for(int i =0;i<n;i++){
            cin >> temp1 >> temp2;
            if(i>0){
                sum1+=temp1;
                sum2+=temp2;
            }
        }
        sum1+=m;
        sum2+=m;
        cout << 2*(sum1+sum2) << endl;
        
    }
}