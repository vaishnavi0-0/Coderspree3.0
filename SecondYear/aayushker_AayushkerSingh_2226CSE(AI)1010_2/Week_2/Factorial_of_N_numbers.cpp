#include<bits/stdc++.h>
using namespace std;

vector<long long> factorialNumbers(long long n) {
    // Write Here
    vector<long long> res;
    for(int i=1; i <= n; i++){
        long long f = 1;
        for(int j = 1; j <= i; j++){
            f = f * j;
        }
        if(f <= n){
            res.push_back(f);
        }
        if(f > n){
            break;
        }
    }
    return res;
}