#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 1234,count =0;
    while (n!=0){
        n/=10;
        count ++;
    }
    cout << count << endl;
}