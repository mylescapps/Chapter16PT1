// Myles Capps
// CW1
//4/20/25
#include <iostream>
#include "Header.h"
using namespace std;  

int main() {
    try {
        cout << "character('a', 1) should return '" << character('a', 1) << "'." << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "character('a', -1) should ";
        cout << character('a', -1) << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "character('Z', -1) should return '" << character('Z', -1) << "'." << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "character('?', 5) should ";
        cout << character('?', 5) << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}

