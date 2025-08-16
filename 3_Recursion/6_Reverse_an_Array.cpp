#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n , int i){
    if (i >= n/2 ) return ;
    else {
        swap(arr[i], arr[n-i-1]);
        reverse(arr, n, i+1);
    }
}
int main(){
    int arr[5]= {1,2,3,4,5};
    reverse(arr, 5, 0);
    for (int i =0 ; i< 5 ; i++){
        cout << arr[i] << endl;
    }
}