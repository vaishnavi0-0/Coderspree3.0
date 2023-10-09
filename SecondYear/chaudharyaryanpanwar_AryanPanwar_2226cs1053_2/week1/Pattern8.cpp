class Solution {
    public :
    void printTriangle(int n){
        //code here
         for (int i = 1 ;i <= n ; i++){
            for (int j =1 ; j<=i;j++){
                cout <<j<<" ";
            } 
            for (int j = 4*(n-i) ;j>0;j-- ){
                cout <<" ";
            }
            for (int j = i ; j>=1 ; j-- ){
                cout << j<<" ";
            }
            cout << endl;
            //16 - 12 - 8- 4
        }
    }
};