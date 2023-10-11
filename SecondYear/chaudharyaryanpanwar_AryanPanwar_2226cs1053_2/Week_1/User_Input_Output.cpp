#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
	cin >> ch;
        (int(ch) >= 65 && int(ch) <= 90)?cout <<"1":((int(ch) >= 97 && int(ch) <= 122)?cout <<"0":cout << "-1");
}
