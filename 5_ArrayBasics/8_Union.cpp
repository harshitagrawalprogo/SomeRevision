#include <bits/stdc++.h>
using namespace std;


int main (){
    int a[]= {1,2,3,4,4,5};
    int b[]={2,2,3,4,5,6,6};

    set <int> s ;
    for (auto i : a){
        s.insert(i);
    }
    for (auto i : b){
        s.insert(i);
    }

    for (auto i : s){
       cout << i << endl;
    }
}