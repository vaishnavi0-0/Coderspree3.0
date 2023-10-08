#include<bits/stdc++.h>
using namespace std;
int F(int n);
int main()
{
        int n;
        scanf("%d",&n);
        cout<<F(n);


        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
}
int F(int n){
        int i;
        int a=1;
        int b=0;
        int c=a+b;
        if(n==1)
        return 1;
        else{
        for (i = 2; i <= n; i++) {
          a = b;
          b = c;
          c = a + b;
        }
        return c;
        }
}