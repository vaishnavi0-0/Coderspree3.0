#include <iostream>
using namespace std;

string compareIfElse(int a, int b) {
	// Write here
	if (a>b)
        return "greater";
    else if (a==b)
        return "equal";
    else
        return "smaller";
}
