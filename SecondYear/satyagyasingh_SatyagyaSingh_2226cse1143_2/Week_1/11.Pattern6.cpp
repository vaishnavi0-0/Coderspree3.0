class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
//it is named as pattern 7 in gfg