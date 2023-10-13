class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int k=1;k<=2*(n-i);k++){
                cout<<"  ";
            }
            for(int j=i;j>=1;j-- ){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};