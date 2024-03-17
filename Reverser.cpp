#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value) {
    if (value < 10)
        return value;
    int lastDigit = value % 10;
    int remainingDigits = value / 10;
    return lastDigit * pow(10, countDigits(remainingDigits)) + reverseDigit(remainingDigits);
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) 
        return "";
    return reverseString(characters.substr(1)) + characters[0];
}

int Reverser::countDigits(int value) {
    if (value < 10)
        return 1;
    return 1 + countDigits(value / 10);
}
