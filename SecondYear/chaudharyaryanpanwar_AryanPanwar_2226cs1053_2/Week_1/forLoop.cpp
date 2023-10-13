#include<bits/stdc++.h>
using namespace std;
int fibonnaci(int n){
        int a =1 ; 
        int b= 1 ;
        int sum = 0 ;
        if (n == 1) {
        return 1;
        }
        else if (n==2){
            return 2;
        }
        while (n-1>1) {
        sum = a+b;
        a = b;
        b =sum;
        // cout << sum << endl;
        n--;
        }
        return sum;
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
         cin >> n;
         cout << fibonnaci(n);

}
