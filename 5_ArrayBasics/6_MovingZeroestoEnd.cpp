#include <bits/stdc++.h>
using namespace std;

// Move all zeroes to the end of the arraY

void mswap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// using two pointers approach
void movezeroes (int arr[], int n){
    int i=0; 
    while(arr[i]!=0 && i<n) i++;
    for (int j=i+1; j<n ; j++){
        if (arr[j]!=0){
            mswap(&arr[i], &arr[j]);
            i++;
        }
    }
}
int main(){
    int arr[5]=  {1,0 ,0,5,0};
    movezeroes(arr, 5);
    for (int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}