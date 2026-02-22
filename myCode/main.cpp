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

	Matrix m(2,2);
	m(0,0) = 1;
	m(0,1) = 2;
	m(1,0) = 3;
	m(1,1) = 4;

	cout << m << endl;
	Matrix b(2,2);

	b = m * 5;
	cout << b << endl;

	Matrix c(2,2);
	cout << "division" << endl;
	cout << m / 5 << endl;

	cout << "addition" << endl;
	cout << m + 2.34 << endl;

	cout << "Subtraction" << endl;
	cout << m - 123.125 << endl;

	Matrix m1(2, 2);
	Matrix m2(2, 2);

	m1(0,0) = 1;
	m1(0,1) = 2;
	m1(1,0) = 3;
	m1(1,1) = 4;

	m2(0,0) = 1;
	m2(0,1) = 2;
	m2(1,0) = 5;
	m2(1,1) = 4;

	if (m1 == m2) {
	    std::cout << "Matrices are equal!" << std::endl;
	}
	if (m1 != m2) {
	    std::cout << "Matrices are not equal!" << std::endl;
	}

	cout << m1 + m2;

	return 0;
}
