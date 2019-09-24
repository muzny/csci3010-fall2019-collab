#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

int Factorial(int n)
{
	int returnThis = 1;
	for (int i = 1; i <= n; i++)
	{
		returnThis*=i;
	}
	return returnThis;
}
