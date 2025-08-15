#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<< "Max Heap" << endl;
    priority_queue <int> pq ; // create a max heap 
    
    pq.push(10); // 10
    pq.push(30);// 30 10 
    pq.push(50); // 50 30 10
    pq.push(20); // 50 30 20 10 

    cout << pq.top() << endl; // 50

    pq.pop(); // 30 20 10 

    cout << pq.top() << endl; // 30


    // ------------------------------
    cout<< "Min Heap" << endl;
    priority_queue <int , vector<int> , greater<int>> min_prq;

    min_prq.push(10); // 10
    min_prq.push(30); // 10 30 
    min_prq.push(50); // 30 50 10 
    min_prq.push(20); // 30 50 20 10

    cout << min_prq.top() << endl; // 30

    min_prq.pop(); // 20 50 10 
    cout << min_prq.top() << endl; // 20



}