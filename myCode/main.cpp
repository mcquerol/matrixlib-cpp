// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>
#include "Matrix.h"

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here

	Matrix m(3,5);
	m.print();

	cout << "matrix-cpp has started." << endl;

	return 0;
}
