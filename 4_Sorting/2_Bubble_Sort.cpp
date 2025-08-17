#include <bits/stdc++.h>
using namespace std;

// 1 2 3 4 5 -4 
// 1 2 3 4 -3 
// 1 2 3 -2 
// 1 2 -1 


void swap(int *a , int *b){
    int temp = *a ;
    *a= *b;
    *b = temp;
}
void bubbleSort(int arr[], int n){
    for (int i =0 ; i<n-1 ; i++){
        for(int j=0; j<n-i-1 ; j++){
            if (arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
        }
    }
}
int main(){
    int arr[6]= {3,2,5,4,1,6};
    bubbleSort(arr, 6);
    for (int i =0 ; i< 6; i++){
        cout << arr[i] << endl;
    }
}