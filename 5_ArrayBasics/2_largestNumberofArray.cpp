#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};

    int k = arr[0];
    for (int i=1 ; i<n ; i++){
        if(arr[i]>k){
            k= arr[i];
        }
    }
    cout << "The largest number is " << k << endl;
}