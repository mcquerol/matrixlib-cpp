/*
 * Matrix.h
 *
 *  Created on: 18 Feb 2026
 *      Author: mateo
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <vector>
#include <ostream>
#include <stdlib.h>

class Matrix {

private:
	size_t m_rows;
	size_t m_cols;
	std::vector<double> m_data;

	bool isSquare() const;
	bool checkIndexOutOfBounds(size_t row, size_t col) const;
	void checkAddSubtractDimensions(Matrix rhs) const;
	void checkMultiplicationDimensions(Matrix rhs) const;
	const std::pair<size_t, size_t> getDimensions() const;

public:
	Matrix();
	Matrix(size_t rows = 2, size_t cols = 2);

	const size_t getRows() const;
	const size_t getCols() const;
	double& operator()(size_t row, size_t col);
	const double& at(size_t row, size_t col) const;
	friend std::ostream& operator<<(std::ostream&, const Matrix& m);

	Matrix& transpose();
	Matrix& flipHorizontal();
	Matrix& flipVertical();

	const double& determinant() const;
	Matrix minorMatrix(size_t row, size_t col) const;
	double dot(Matrix other) const;

	Matrix operator+(Matrix rhs) const;
	Matrix operator-(Matrix rhs) const;
	Matrix operator*(Matrix rhs) const;

	Matrix operator+(double scalar) const;
	Matrix operator-(double scalar) const;
	Matrix operator*(double scalar) const;
	Matrix operator/(double scalar) const;

	bool operator==(Matrix rhs) const;
	bool operator!=(Matrix rhs) const;


};


#endif /* MATRIX_H_ */
