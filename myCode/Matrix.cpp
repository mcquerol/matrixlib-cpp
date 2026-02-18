/*
 * Matrix.cpp
 *
 *  Created on: 18 Feb 2026
 *      Author: mateo
 */

#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(size_t rows, size_t cols) : m_rows(rows), m_cols(cols)
{
}

bool Matrix::isSquare() const
{
	return false; // default value
}

void Matrix::checkIndexOutOfBounds(size_t row, size_t col) const
{
}

void Matrix::checkAddSubtractDimensions(Matrix rhs) const
{
}

void Matrix::checkMultiplicationDimensions(Matrix rhs) const
{
}

const std::pair<size_t, size_t> Matrix::getDimensions() const
{
	return pair(0,0);
}


double& Matrix::set(size_t row, size_t col)
{
	return 0.0F;
}

const double& Matrix::at(size_t row, size_t col) const
{
	return 0.0F;
}

void Matrix::print() const
{
	cout << "";
}

Matrix& Matrix::transpose()
{
	return this;
}

Matrix& Matrix::flipHorizontal()
{
	return this;
}

Matrix& Matrix::flipVertical()
{
	return this;
}

const double& Matrix::determinant() const
{
	return 0.0F;
}

Matrix Matrix::minorMatrix(size_t row, size_t col) const
{
	return 0.0F;
}

double Matrix::dot(Matrix other) const
{
	return 0.0F;
}

Matrix Matrix::operator +(Matrix rhs) const
{
	return Matrix(0,0);
}

Matrix Matrix::operator -(Matrix rhs) const
{
	return Matrix(0,0);
}

Matrix Matrix::operator *(Matrix rhs) const
{
	return Matrix(0,0);
}

Matrix Matrix::operator *(double scalar) const
{
	return Matrix(0,0);
}

Matrix Matrix::operator /(double scalar) const
{
	return Matrix(0,0);
}

bool Matrix::operator ==(Matrix rhs) const
{
	return false;
}

bool Matrix::operator !=(Matrix rhs) const
{
	return false;
}
