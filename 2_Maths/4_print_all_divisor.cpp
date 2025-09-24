#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n =24;
    // vector <int> divisors;
    // for (int k =1 ; k*k<=n; k++){
    //     if (n%k == 0){
    //         divisors.push_back(k);
    //         if (k != (n/k)) divisors.push_back(n/k);
    //     }
    // }
    // sort(divisors.begin(), divisors.end());
    // for (auto i : divisors){
    //     cout<<i<<" ";
    // }

    vector <int> v1;
    int n = 10;
    for (int i=1 ; i*i<=n ; i++ ){
        if((n%i)==0){
            v1.push_back(i);
        }
        if(i!=(n/i)){
            v1.push_back(n/i);
        }
    }
    sort(v1.begin(),v1.end());

    for (auto i : v1){
        cout << i << " ";
    }


    return 0;
    
}