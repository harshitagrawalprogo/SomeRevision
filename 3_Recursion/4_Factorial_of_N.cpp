#include<bits/stdc++.h>
using namespace std;



// sum of n natural numbers 
int sum1(int n ){
    if (n==1) return 1;
    return n* sum1(n-1);
}
int main(){
    int n = 10;
    int sum =1;
    // sum of n natural numbers 
    for(int i = 1 ; i<=n ; i++){
        sum *= i;

    }
    cout<<"The factorial but the for loop is :"<< sum << endl;


    // using recursion 

    cout<< sum1(n) << endl;
}