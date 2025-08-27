#include <bits/stdc++.h>
using namespace std;


int main (){
    vector <int> a = {1,2,3,4,4,5};
    vector <int> b ={2,2,3,4,5,6,6};

    // set <int> s ;
    // for (auto i : a){
    //     s.insert(i);
    // }
    // for (auto i : b){
    //     s.insert(i);
    // }

    // for (auto i : s){
    //    cout << i << endl;
    // }


    // optimal solution

    // initialise pointers 
    int i=0, j=0;
    vector <int> ans;

    while (i<a.size() && j<b.size()){
        if (a[i]<b[j]){
            if(ans.empty() || ans.back()!=a[i] ){
                ans.emplace_back(a[i]);
                
            }i++;
        }else if(a[i]>b[j]){
            if(ans.empty() || ans.back()!=b[j] ){
                ans.emplace_back(b[j]);
                
            }j++;
        }else{
            if(ans.empty()|| ans.back()!=b[j]){
                ans.emplace_back(b[j]);
                i++;
                j++;
            }
        }
    }
    while(i<a.size()){
        if (a[i]<b[j]){
            if(ans.empty() || ans.back()!=a[i] ){
                ans.emplace_back(a[i]);
                
            }i++;
        }
    }
    while(j<b.size()){
        if(ans.empty() || ans.back()!=b[j] ){
                ans.emplace_back(b[j]);
                
        }j++;
    }
    for(auto i : ans){
        cout<< i << endl;
    }

}