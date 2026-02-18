/*
 * Matrix.h
 *
 *  Created on: 18 Feb 2026
 *      Author: mateo
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <vector>
#include <stdlib.h>

class Matrix {

private:
	size_t m_rows;
	size_t m_cols;
	std::vector<double> m_data;

public:
	Matrix();
	virtual ~Matrix();
};


#endif /* MATRIX_H_ */
