// allow to stor and remove from beggining and the end .

#include <bits/stdc++.h>
using namespace std;

int main(){
    deque <int> d1 ; // {}

    d1.push_back(1); // 1 
    d1.push_front(0); // 0 1 
    d1.emplace_back(3); // 0 1 3 
    d1.emplace_front(-1); // -1 0 1 3 

    cout << d1.back() << endl;  // 3 
    cout << d1.front() << endl; // -1 





}