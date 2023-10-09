#include <bits/stdc++.h>
using namespace std;

int fib(int term) {
  int a = 1, b = 1, c = term - 2, fibSum = 0;
  if (term == 1 || term == 2) {
    return a;
  } else {
    while (c != 0) {
      fibSum = a + b;
      a = b;
      b = fibSum;
      c--;
    }
    return fibSum;
  }
}

int main() {
  int n;
  cin >> n;
  cout<<fib(n);
}
