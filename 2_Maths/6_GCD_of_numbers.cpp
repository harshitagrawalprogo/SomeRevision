#include<bits/stdc++.h>
using namespace std ;

// GCD of two numbers
int main(){
    int a = 10 , b = 15 ;
    int GCD= 1;
    for( int i=1 ; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            GCD= i;
        }
    }
    cout << GCD << endl;
    // this above gives O(min(a,b))



    // Euclidean algorithm
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    cout << a << endl;
    // This give the time complexity as O(logn)


    // combining the above two 
    while( a!=0 && b!=0){
        if ( a>= b ){
            a = a%b ;
        }else {
            b = b%a ;
        }
    }
    cout << max(a,b) << endl;

    // this gives the complexity as O(log(min(a,b)))
}