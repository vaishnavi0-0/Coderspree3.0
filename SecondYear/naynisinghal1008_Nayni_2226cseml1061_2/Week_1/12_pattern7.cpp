//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
       
        
        for(int i=1;i<=2*n;i++)
        {
            if(i<=n)
            {
                int k=1;
            for(int j=1;j<=2*n;j++)
            {
              if((j>=(n+1-i)&&j<=(n-1+i))&&k==1)  
              {
                  cout<<'*';
                  k=0;
              }
              else
              {
                  cout<<" ";
                  k=1;
              }
            }
            cout<<endl;
            }
            else
            {
                int s=(2*n-i+1);
                int k=1;
                for(int j=2*n-1;j>=1;j--)
                {
                    if((j<=(n-1+s)&&j>=(n+1-s))&&k==1)
                    {
                        cout<<'*';
                        k=0;
                    }
                    else
                    {
                        cout<<" ";
                        k=1;
                    }
                }
                cout<<endl;
               
            }
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends