#include <iostream>
#include <string>
using namespace std;

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
