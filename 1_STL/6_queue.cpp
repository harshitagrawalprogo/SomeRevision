#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <int > q ;

    q.push(1); //1 
    q.push(2); //1 2 
    q.push(3); // 1,2,3 
    cout << q.front() << endl; //  1
    cout << q.back() << endl; //  3
    q.pop();// 2 3 
    cout << q.front() << endl; //  2
    cout << q.back() << endl; //  3
    q.pop();// 3
    cout << q.front() << endl; //  3
    cout << q.back() << endl; //  3
    q.pop();// 

}