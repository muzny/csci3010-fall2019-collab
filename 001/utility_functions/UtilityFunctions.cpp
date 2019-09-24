#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

// This function takes in an integer, and divides it by two as many times as possible
// The resulting value is returned
int RemoveTwos(int original){
    while(original % 2 == 0){
        original = original / 2;
    }
    return original;
}