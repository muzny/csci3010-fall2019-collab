#include "UtilityFunctions.h"
#include <iostream>
#include <vector>

/**
    Returns the product the elements in a vector.

    @param nums The vector for which to calculate a product.
    @return The product.
*/
int Product(std::vector<int> nums) {
	int product = 1;
	if (nums.size() == 0) {
		return 0;
	}
	for (int i = 0; i < nums.size(); i++) {
		product *= nums[i];
	}

	return product;
}