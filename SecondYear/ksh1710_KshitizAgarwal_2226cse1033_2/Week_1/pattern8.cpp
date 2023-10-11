  void printTriangle(int n) {
        int x= (n*2)-2;
	     for (int i = 1; i <= n; i++){
	         
             for (int j =1; j <= i; j++){
                  cout<<j<<" ";
               }
               for(int k=x;k>=1;k--){
                   cout<<"  ";
               }
               x=x-2;
               for(int l=i;l>=1;l--){
                   cout<<l<<" ";
               }
            cout << endl;
         }
    }