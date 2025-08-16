#include <bits/stdc++.h>
using namespace std;

void print(int k , int n ){
    if (k>n) return;
    cout<< k << endl;
    return print(k+1,n);
    
}
int main(){
    print(1,5);
}