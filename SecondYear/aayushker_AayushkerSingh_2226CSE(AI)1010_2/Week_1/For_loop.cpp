#include<bits/stdc++.h>
using namespace std;

int main(){
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
      int a=0,b=1,c=1,i,t;
      cin>>t;
      for(i=1;i<t;i++){
              c=a+b;
              a=b;
              b=c;
      }
      cout<<c;
      return 0;
}
