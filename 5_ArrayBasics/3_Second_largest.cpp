#include <bits/stdc++.h>
using namespace std ;

int main(){

    // bruteforce is sort algo and then backtrack the second largest element


    // optimal sol O(N-2)
    int max,second_max, n= 6 ;
    int arr[n]= {3,2,4,5,1};

    if(arr[0]>arr[1]){
        max= arr[0];
        second_max= arr[1];
    }
    else{
        max= arr[1];
        second_max= arr[0];

    }

    for (int i=2 ; i<n ; i++){
        if (arr[i]>max){
            second_max= max;
            max= arr[i];
        }else if (arr[i]>second_max){
            second_max= arr[i];
        }
    }
    cout<<second_max<<endl;
}