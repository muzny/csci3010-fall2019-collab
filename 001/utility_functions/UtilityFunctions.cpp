#include "UtilityFunctions.h"
#include <math.h>       

// Implement your functions here. Don't forget function comments!

/*
Function that returns n! or n factoral.

@param n is the number you want to be factoraled
@returns an int of your input number factoraled lol
	returns -1 if @param n < 0
*/
int Factorial(int n)
{
	int returnThis;
	if (n < 0)
	{
		return -1;
	}
	else
	{
		if (n == 0)
		{
			return 1;
		}
		else if (n == 1)
		{
			return 1;
		}
		returnThis = 1;
		for (int i = 1; i <= n; i++)
		{
			returnThis*=i;
		}
		return returnThis;
	}
}
