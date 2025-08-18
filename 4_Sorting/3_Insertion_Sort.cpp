#include <bits/stdc++.h>
using namespace std;

// 5 4 3 2 1 
// 4 5 

void swap(int *a, int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

// 5 3 4 2 1


void insertionSort(int arr[], int n){
    for (int i =1 ; i< n ; i++){
        int key = arr[i];
        int j= i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j]=key;
    }
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5 ;
    insertionSort(arr, n );
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}