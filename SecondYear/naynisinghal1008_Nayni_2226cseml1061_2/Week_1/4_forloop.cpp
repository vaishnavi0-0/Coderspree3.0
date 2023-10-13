#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
       int a=1;
       int b=1;
       int c;
       if(n==1||n==2)
       {
               cout<<1;
       }
       else
       {
               for (int i = 1; i < n - 1; i++) {
                 c = a + b;
                 a = b;
                 b = c;
               }
               cout<<c;
       }
}