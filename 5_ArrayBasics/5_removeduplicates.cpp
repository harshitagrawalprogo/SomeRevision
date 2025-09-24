#include <bits/stdc++.h>
using namespace std;


void removeduplicates(int arr[], int n ){
    set <int> s ;
    for (int i=0; i< n ; i++){
        s.insert(arr[i]);
    }
    for (auto i: s){
        cout<<i<<" ";
    }
}

int main(){
     int arr[5]= {1,2,3,4,2};
     removeduplicates(arr, 5);
}


// using two pointers approach 
