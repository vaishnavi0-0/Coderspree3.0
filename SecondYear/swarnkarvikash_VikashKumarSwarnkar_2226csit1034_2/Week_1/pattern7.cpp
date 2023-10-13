class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            for(int space=0;space<n-i-1;space++)
            {
                cout<<" ";
            }
            for(int j=0;j<i+1;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++)
        {
            for(int space=0;space<i;space++)
            {
                cout<<" ";
            }
            for(int j=n-i;j>0;j--)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};