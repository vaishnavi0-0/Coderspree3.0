class Solution {
    public :
    void printTriangle(int n){
        //code here
        for (int i = n ;i >= 1 ; i--){
            for (int j =1 ; j<=i;j++){
                cout <<"*";
            } 
            for (int j = 2*(n-i) ;j>0;j-- ){
                cout <<" ";
            }
            for (int j = i ; j>=1 ; j-- ){
                cout << "*";
            }
            cout << endl;
            //16 - 12 - 8- 4
        }
         for (int i = 1 ;i <= n ; i++){
            for (int j =1 ; j<=i;j++){
                cout <<"*";
            } 
            for (int j = 2*(n-i) ;j>0;j-- ){
                cout <<" ";
            }
            for (int j = i ; j>=1 ; j-- ){
                cout << "*";
            }
            cout << endl;
            //16 - 12 - 8- 4
        }
    }
};