class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            for(int space=1;space<=n-i;space++)
            {
                cout<<" ";
            }
           
            for(int j=1;j<=(2*i)-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
};