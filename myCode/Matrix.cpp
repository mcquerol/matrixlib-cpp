/*
 * Matrix.cpp
 *
 *  Created on: 18 Feb 2026
 *      Author: mateo
 */

#include "Matrix.h"

Matrix::Matrix(size_t rows, size_t cols)
{
}

bool Matrix::isSquare() const
{
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
}


double& Matrix::at(size_t row, size_t col)
{
}

const double& Matrix::at(size_t row, size_t col) const
{
}

void Matrix::print() const
{
}

Matrix& Matrix::transpose()
{
}

Matrix& Matrix::flipHorizontal()
{
}

Matrix& Matrix::flipVertical()
{
}

const double& Matrix::determinant() const
{
}

Matrix Matrix::minorMatrix(size_t row, size_t col) const
{
}

double Matrix::dot(Matrix other) const
{
}

Matrix Matrix::operator +(Matrix rhs) const
{
}

Matrix Matrix::operator -(Matrix rhs) const
{
}

Matrix Matrix::operator *(Matrix rhs) const
{
}

Matrix Matrix::operator *(double scalar) const
{
}

Matrix Matrix::operator /(double scalar) const
{
}

bool Matrix::operator ==(Matrix rhs) const
{
}

bool Matrix::operator !=(Matrix rhs) const
{
}
