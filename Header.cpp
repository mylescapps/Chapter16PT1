#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <exception>
using namespace std;  


class invalidCharacterExcpeption : public exception {
public:
    const char* what() const noexcept override;
};

class invalidRangeExpection : public exception {
public:
    const char* what() const noexcept override;
};

char character(char start, int offset);

#endif 
