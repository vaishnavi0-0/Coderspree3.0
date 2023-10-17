class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=(n-i);j++){
                cout<<" ";
            }
           
        for(int k=1;k<=(i-1);k++){
            cout<<"*";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
        }
    }
};