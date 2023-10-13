#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,n1=0,n2=0;
	cin>>n;
	while(n!=0){
		int r=n%10;
		
		if(r%2==0){
			 n1=n1+r;
		}
		else {
			 n2=n2+r;
		}
		n=n/10;
	}
	cout<<n1<<" "<<n2;
}
