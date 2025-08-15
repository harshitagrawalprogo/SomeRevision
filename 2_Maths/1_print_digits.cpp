#include <bits/stdc++.h>
using namespace std;


int main(){
    // 1234 

    // to get 4 3 2 1 
    int n= 1234;
    int ques = 10;
    while ( n>=1) {
        cout << n%ques << endl;
        n= n/ques;
    }

    // to get  4 3 2 1
    n= 1234;
    while(n>=1){
        cout << n%10 << endl;
        n= n/10;
    }

}