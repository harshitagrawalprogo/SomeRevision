#include <bits/stdc++.h>
using namespace std;


int main(){
    // int n= 1234, newNo=0;

    // while (n !=0 ){
    //     newNo = newNo *10 + n%10;
    //     n/=10;
    // }
    
    // cout<< newNo << endl;

    int n= 1234;
    int newNo=0;
    while(n>=1){
        newNo = newNo*10 + n%10;
        n/=10;
    }
    cout << newNo << endl;

}

