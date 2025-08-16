#include <bits/stdc++.h>
using namespace std;

void print(int k , int n ){
    if (k>n) return;
    print(k+1,n);
    cout<< k << endl;
}
int main(){
    print(1,5);
}