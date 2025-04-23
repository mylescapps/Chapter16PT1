// Myles Capps
// CW1
//4/20/25

#include <iostream>
using namespace std;

// Custom exception for invalid characters
class invalidCharacterExcpeption : public exception {
public:
    const char* what() const noexcept override {
        return "character('?', 5) should throw an invalidCharacterExcpeption.";
    }
};

// Custom exception for out-of-range result
class invalidRangeExpection : public exception {
public:
    const char* what() const noexcept override {
        return "character('a', -1) should throw an invalidRangeExpection.";
    }
};

// Character offset function
char character(char start, int offset) {
    if (!isalpha(start)) {
        throw invalidCharacterExcpeption();
    }

    char result = start + offset;

    // Prevent case crossover and non-letter results
    if ((islower(start) && (!islower(result) || !isalpha(result))) ||
        (isupper(start) && (!isupper(result) || !isalpha(result)))) {
        throw invalidRangeExpection();
    }

    return result;
}

// Main function to run tests
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
