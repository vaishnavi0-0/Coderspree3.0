#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	int rem;
	int even=0;
	int odd=0;
	cin>>n;
	while(n>0){
		rem=n%10;
		n/=10;
		if(rem%2==0){
			even+=rem;
		}else{
			odd+=rem;
		}
	}
	cout<<even<<" "<<odd<<endl;
	return 0;
	
}
