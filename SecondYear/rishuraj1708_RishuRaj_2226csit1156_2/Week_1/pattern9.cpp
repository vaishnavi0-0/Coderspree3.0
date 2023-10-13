class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int spaces=0;
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=spaces;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            spaces=spaces+2;
            cout<<endl;
        }
        spaces=2*(n-1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=1;j<=spaces;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            spaces=spaces-2;
            cout<<endl;
        }
    }
};
