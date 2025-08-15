// stack works on the concept og LIFO Last in first out 

#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> s ;

    s.push(1); // 1 
    s.push(2); // 2 1 

    cout<< s.top() << endl; // 2

    s.pop(); // 2 

}