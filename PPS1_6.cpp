#include <iostream>
#include <climits>

using namespace std;
void calculatemagnitude(int arr[], string l[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;l[i][j]!='\0';j++){
            arr[i] += (l[i][j]-96);
        }
    }
}
void merge(int arr[], string l[], int start, int mid, int end){
    int n1 = mid-start+1;
    int n2 = end-mid;

    string l1[n1+1];
    int l2[n1+1];
    string r1[n2+1];
    int r2[n2+1];

    for(int i=0;i<n1;i++){
        l1[i] = l[start+i];
        l2[i] = arr[start+i];
    }
    for(int i=0;i<n2;i++){
        r1[i] = l[mid+i+1];
        r2[i] = arr[mid+i+1];
    }
    
    l2[n1] = 0;
    r2[n2] = 0;

    int i=0, j=0, o=start;

    while(i!=n1 || j!=n2){
        if(l2[i]>r2[j]){
            arr[o] = l2[i];
            l[o++] = l1[i++];
        }
        else{
            arr[o] = r2[j];
            l[o++] = r1[j++];
        }
    }
}
void mergesort(int arr[], string l[], int start, int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    mergesort(arr, l, start, mid);
    mergesort(arr, l, mid+1, end);
    merge(arr, l, start, mid, end);
}
int main(){
    int n;
    cin >> n;
    string l[n];
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int arr[n] = {0};
    calculatemagnitude(arr, l, n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    mergesort(arr, l, 0, n-1);

    for(int i=0;i<n;i++){
        cout << l[i] << " ";
    }
}