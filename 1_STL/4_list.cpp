#include <bits/stdc++.h>
using namespace std ;

// list has all the func to insert as O(1)
int main(){
    list <int> l1;
    
    l1.push_back(1); // 1 
    l1.push_front(2); // 2 1 
    l1.emplace_front(3); // 3 2 1 
    l1.emplace_back(-1); // 3  2 1 -1 


}