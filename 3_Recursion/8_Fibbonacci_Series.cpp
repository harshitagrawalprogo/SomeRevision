#include <bits/stdc++.h>
using namespace std;

int fib(int n , int a =0 , int b =1 ){
    if (b > n ) return 0;
    cout<< a << " ";
    return fib(n, b, a+b);

}

int fibbo(int n ){
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fibbo(n-1) + fibbo(n-2); 
}
int main(){
    int n=55;
    fib(n);

    cout<< " " << endl;
    // other than the above you can use the following 
    cout<< fibbo(3) << endl;
    return 0;


    
}