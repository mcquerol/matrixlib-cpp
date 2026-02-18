/*
 * UnitTests.h
 *
 *  Created on: 18 Feb 2026
 *      Author: mateo
 */

#ifndef UNITTESTS_H_
#define UNITTESTS_H_

class UnitTests {
public:
	UnitTests();
	virtual ~UnitTests();

	void runAllTests();
	void testMultiplication();
	void testDeterminant();
	void testTranspose();
	void testDotProduct();
	void testMinorMatrix();
};

#endif /* UNITTESTS_H_ */
