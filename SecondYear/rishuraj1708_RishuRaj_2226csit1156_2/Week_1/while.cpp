#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int sum_even = 0, sum_odd = 0;
	while(n){
		if((n%10)%2==0){
			sum_even = sum_even+n%10;
		}
		else{
			sum_odd = sum_odd+n%10;
		}
		n/=10;
	}
	cout<<sum_even<<" "<<sum_odd;
	
}
