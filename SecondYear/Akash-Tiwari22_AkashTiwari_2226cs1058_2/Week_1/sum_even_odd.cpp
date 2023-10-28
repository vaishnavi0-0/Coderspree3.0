#include <iostream>
using namespace std;

int main() {
  // Write your code here
  int sumEven = 0, sumOdd = 0, n;
  cin>>n;
  while (n != 0) {
    int digit = n % 10;
    if (digit % 2 == 0) {
      sumEven = sumEven + digit;
    } else {
      sumOdd = sumOdd + digit;
    }
    n = n / 10;
  }
  cout << sumEven << " " << sumOdd;
  return 0;
}
