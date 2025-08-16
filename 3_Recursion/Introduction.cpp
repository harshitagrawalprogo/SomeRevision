#include <bits/stdc++.h> 
using namespace std;


int sayhello(){
    cout << "Hello" << endl;
    return sayhello();
}
int main(){
    // a recursive function is a function that repeats itself when calles
    // a recursive function has a base case to terminate the recursion and a body ! 

    // here is an example 
    sayhello(); // got for unilimited time usess stack until the stack memory is used // lead to stack overflow 
}