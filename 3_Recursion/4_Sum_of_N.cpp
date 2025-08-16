#include<bits/stdc++.h>
using namespace std;



// sum of n natural numbers 
int sum1(int n ){
    if (n==0) return 0;
    return n+ sum1(n-1);
}
int main(){
    int n = 10;
    int sum =0;
    // sum of n natural numbers 
    for(int i = 1 ; i<=n ; i++){
        sum += i;

    }
    cout<<"The sum but the for loop is :"<< sum << endl;


    // using recursion 

    cout<<"the sum via recursion is :"<< sum1(n) << endl;

    // using the formula 

    cout<< "The sum vai formula is :" << (n*(n+1))/2 << endl;

}