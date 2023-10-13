class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=1;i<=n;i++){
	        for(int j=0;j<=n-i;j++){
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}
};