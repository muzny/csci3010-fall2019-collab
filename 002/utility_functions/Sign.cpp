//Alden Maben

/*
 This function will take any integer and will return 1 if the value is positive, -1 if the value is negative, and 0 if the value is 0
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

// Takes int and returns the 1 or -1 for the sign of the value and 0 if the value is 0
int Sign (int num){
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }
    else{
        return 0;
    }
}
