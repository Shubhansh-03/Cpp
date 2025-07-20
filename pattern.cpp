#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i=1;i<=2*n-1;i++){
        int x = n;
        for(int j=1;j<=2*n-1;j++){
            if(i<=n){
                if(j>=i && j<n){
                    cout << x << " ";
                }
                else if(j<n){
                    cout << x << " ";
                    x--;
                }
                else if(j>=n){
                    cout << x << " ";
                    x++;
                }
            }
        }
            cout << endl;
    }
}