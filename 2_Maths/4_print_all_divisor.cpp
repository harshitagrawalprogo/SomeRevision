#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =24;
    vector <int> divisors;
    for (int k =1 ; k*k<=n; k++){
        if (n%k == 0){
            divisors.push_back(k);
            if (k != (n/k)) divisors.push_back(n/k);
        }
    }
    sort(divisors.begin(), divisors.end());
    for (auto i : divisors){
        cout<<i<<" ";
    }
    return 0;
    
}