#include<iostream>
#include <string>
using namespace std;

int main() {
	// Write your code here
	int num;
	cin >> num;
	
	int odd = 0 ; 
	int even  = 0 ;
	
	int temp = 0 ; 
    while (num != 0) {
		temp = num%10;
		(temp%2==0)?even+=temp:odd+=temp;
		num = num / 10;
    }
	cout << even << " "<<odd ;
}
