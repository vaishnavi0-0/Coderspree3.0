#include <iostream>
using namespace std;

int dataTypes(string type) {
    if (type == "Long") {
        return 8;
    } else if (type == "Float") {
        return 4;
    } else if (type == "Integer") {
        return 4;
    } else if (type == "Double") {
        return 8;
    } else {
        return 1;
    }
}

// int main() {
//     string dataType;

//     cout << "Enter a data type (Long, Float, Integer, Double): ";
//     cin >> dataType;

//     int size = dataTypes(dataType);

//     if (size == 1) {
//         cout << "Unknown data type or not supported." << endl;
//     } else {
//         cout << "Size of " << dataType << " is " << size << " bytes." << endl;
//     }

//     return 0;
// }
