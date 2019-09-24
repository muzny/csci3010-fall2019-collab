#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

int Factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 1;
	}
	int returnThis = 1;
	for (int i = 1; i <= n; i++)
	{
		returnThis*=i;
	}
	return returnThis;
}
