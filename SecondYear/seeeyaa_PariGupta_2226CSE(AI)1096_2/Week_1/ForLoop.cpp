#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n,a=1,b=1,c;
        cin>>n;
        if(n==1) cout<<a;
        else if(n==2)  cout<<b;
        else
        {
             for(int i=3;i<=n;i++)
        {
         c=a+b;
         a=b;
         b=c;
        }
        cout<<c;
        }
        
        

        return 0;
       
        
        


}