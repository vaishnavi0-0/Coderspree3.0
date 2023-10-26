#include <iostream>
using namespace std;

string compareIfElse(int a, int b) {
    if (a > b)
        return "greater";
    else if (a == b)
        return "equal";
    else
        return "smaller";
}

// int main() {
//     int num1, num2;
    
//     cout << "Enter the first number: ";
//     cin >> num1;
    
//     cout << "Enter the second number: ";
//     cin >> num2;
    
//     string result = compareIfElse(num1, num2);
    
//     cout << "Result: " << result << endl;
    
//     return 0;
// }
