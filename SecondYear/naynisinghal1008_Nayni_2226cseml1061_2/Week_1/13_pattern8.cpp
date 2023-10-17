//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++)
        {
            int k=1;
            for(int j=1;j<=n;j++)
            {
                  if(j<=i)
                {
                    cout<<k<<" ";
                    k++;
                }
                else
                {
                    cout<<" ";
                }
            
            }
            k=k-1;
            for(int j=1;j<=n;j++)
            {
                if(j>=(n-i+1))
                {
                    cout<<k<<" ";
                    k--;
                }
                else
                {
                    cout<<"   ";
                }
            }
            cout<<endl;
        }
        // code here
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends