#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
  cin >> n;

  int even_sum = 0;
  int odd_sum = 0;

  while (n > 0) {
    int digit = n % 10;
    if (digit % 2 == 0) {
      even_sum += digit;
    } else {
      odd_sum += digit;
    }
    n /= 10;
  }

  cout << even_sum <<" "<<odd_sum;
//   cout <<  odd_sum;

  return 0;
}
