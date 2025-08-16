#include <bits/stdc++.h>
using namespace std;

bool checkPalindome(string s){
    if (s.size()==1 || s.size()==0) return true;
    if (s.front()== s.back()){
        return checkPalindome(s.substr(1,s.size()-2)); // substr takes the start index nd length 
    }else {
        return false;
    }
}

int main (){
    string s = "abcba";
    cout << checkPalindome(s); 
}