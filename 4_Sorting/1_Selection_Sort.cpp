#include <bits/stdc++.h>
using namespace std;

void swap(int *a , int *b){
    int temp = *a;
    *a = *b ;
    *b = temp;
}
void selectionSort(int arr[], int n) {
    for(int i=0 ; i<n-1 ; i++){
        int min = i;
        for (int j=i; j < n ; j++ ){
            if (arr[j] < arr[min]) min = j;
        }
        swap(&arr[i], &arr[min]);
    }
}

int main(){
    int arr[6]= {5,4,2,7,3,1};
    selectionSort(arr, 6);
    for (int i=0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }
}