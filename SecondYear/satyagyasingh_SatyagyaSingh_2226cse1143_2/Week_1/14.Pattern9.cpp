class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k=1;k<=2*(n-i);k++){
                cout<<" ";
            }
            for(int j=i;j>=1;j-- ){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k=1;k<=2*(n-i);k++){
                cout<<" ";
            }
            for(int j=i;j>=1;j-- ){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};