#include<bits/stdc++.h>
using namespace std;

void rotateLeftByOne(int arr[], int n){
    int temp = arr[0];
    for (int i=1 ; i< n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}


void rotateleftbyk(int arr[],int n,int k){
    int arr1[k];
    for (int i=0 ; i< k; i++){
        arr1[i] = arr[i];
    }
    for(int i=k; i< n ; i++){
        arr[i-k]= arr[i];
    }

    for (int i=0; i<k; i++){
        arr[n-k+i]= arr1[i] ;
    }
    for (int i=0 ; i< n; i++){
        cout<<arr[i]<<" ";
}
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotateleftbyk(arr,n,2);

}