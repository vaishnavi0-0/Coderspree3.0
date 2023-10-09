#include<iostream>
using namespace std;

int main()
{
      int a,b,c=1,i,t;
      cin>>t;
      a=0;
      b=1;
      for(i=1;i<t;i++){
              c=a+b;
              a=b;
              b=c;

      }
      cout<<c;
      return 0;
}




