#include <bits/stdc++.h>
using namespace std;
// Arrays are of fixed sized while vectors are of dynamic size and are automatically managed 

int main(){
    // initialisation
    vector <int> v ; // {}
    // initialisationa and declaration 
    vector <int> v1= {1,2,3,4,5,6}; //{1,2,3,4,5,6}

    vector <int> v2(5,20); // 20,20,20,20,20

    vector <int> v3(v1); // copies v1 

    vector <int> v4(5); // 0,0,0,0,0


    v.push_back(1);// 1 
    v.emplace_back(2); // 1,2


    // to set pointers in the start and the end we have 

    // these are iterators
    vector<int> :: iterator itr1 = v1.begin();
    vector<int> :: iterator itr2 = v1.end();
    vector<int> :: reverse_iterator itr3 = v1.rbegin();
    vector<int> :: reverse_iterator itr4 = v1.rend();

    itr1++; // increments the iterator by 1
    *(itr2); // dereferences the iterator
    
    // it is uesd to traverse 
    for (itr1 ; itr1!=itr2 ; itr1++){
        cout<<*itr1<<endl;
    }

    // for reverse direction 
    for (itr3 ; itr3!=itr4; itr3++){
        cout<<*itr3<<endl;
    }

    // to print all values {}
    for (int a : v1 ){
        cout << a << endl;
    }


    // remove from vector 

    v1.erase(itr1); // removes the value at the iterator
    v1.erase(itr1,itr2); // removes the value from the iterator1 to the iterator2

    // to clear the vector 
    v1.clear();

    // insert into vector
    v1.insert(itr1,10); // inserts 10 at the iterator1
    

    v1.swap(v2);
    cout<<"_____________"<<endl;
    for (int i : v1){
        cout<<i<<endl;
    }

    v1.empty();
    
}