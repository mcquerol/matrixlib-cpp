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
	Matrix(size_t rows = 2, size_t cols = 2);
	virtual ~Matrix();

	const std::pair<size_t, size_t> getDimensions() const;
	double& at(size_t row, size_t col);
	const double& at(size_t row, size_t col) const;
	void print() const;

	Matrix& transpose();
	Matrix& flipHorizontal();
	Matrix& flipVertical();


};


#endif /* MATRIX_H_ */
