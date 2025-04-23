#pragma once
#include <string>
#include "classes.cpp"
#ifndef HEADER_H
#define HEADER_H
using namespace std;

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





#endif