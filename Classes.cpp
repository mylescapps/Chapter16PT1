#include "header.h"
#include <cctype>  
using namespace std;  

const char* invalidCharacterExcpeption::what() const noexcept {
    return "character('?', 5) should throw an invalidCharacterExcpeption.";
}

const char* invalidRangeExpection::what() const noexcept {
    return "character('a', -1) should throw an invalidRangeExpection.";
}


char character(char start, int offset) {
    if (!isalpha(start)) {
        throw invalidCharacterExcpeption();
    }

    char result = start + offset;

    
    if ((islower(start) && (!islower(result) || !isalpha(result))) ||
        (isupper(start) && (!isupper(result) || !isalpha(result)))) {
        throw invalidRangeExpection();
    }

    return result;
}
