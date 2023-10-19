#include<iostream>
using namespace std;

int main() {
	long long n;
	int s1=0,s2=0;
	cin>>n;
	while(n>0){
		int rem = n%10;
		if(rem%2==0){
			s1+=rem;
		}
		else{
			s2+=rem;
		}
		n /= 10;
	}
	cout<<s1<<" "<<s2;
	return 0;
}
