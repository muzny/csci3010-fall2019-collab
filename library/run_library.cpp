#include <iostream>
#include <vector>
#include "Library.h"

/* 
File comment should go here

*/


int main() {

    // start off with one library instantiated
    Library lib;
	Book b;
	b.title = "Extreme Dieting";
	b.author = "Random";
	lib.DonateMult(b, 4);

}
