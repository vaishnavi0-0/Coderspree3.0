#include<iostream>
using namespace std;

int main() {
	int n,evenSum=0,oddSum=0,d;
	cin>>n;
	while(n!=0){
		d=n%10;
		n=n/10;
		if(d%2==0){
			evenSum+=d;
		}else{
			oddSum+=d;
		}
	}
	cout<<evenSum<<" "<<oddSum;
}
