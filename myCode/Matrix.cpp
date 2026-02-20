/*
 * Matrix.cpp
 *
 *  Created on: 18 Feb 2026
 *      Author: mateo
 */

#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(size_t rows, size_t cols) : m_rows(rows), m_cols(cols), m_data(m_rows * m_cols)
{
}

bool Matrix::isSquare() const
{
	if(m_rows == m_cols)
	{
		return true;
	}
	return false;
}

bool Matrix::checkIndexOutOfBounds(size_t row, size_t col) const
{
	if(row > m_rows && col > m_cols)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Matrix::checkAddSubtractDimensions(Matrix rhs) const
{
}

void Matrix::checkMultiplicationDimensions(Matrix rhs) const
{
}

const std::pair<size_t, size_t> Matrix::getDimensions() const
{
	return pair<double, double>(m_rows , m_cols);
}

double& Matrix::operator ()(size_t row, size_t col)
{
	return m_data[row * m_cols + col];
}

const double Matrix::at(size_t row, size_t col) const
{

	if(checkIndexOutOfBounds(row, col))
	{
		throw out_of_range("index out of range");
	}
	else
	{
		return m_data[row * m_cols + col];
	}

}

ostream& operator<<(std::ostream& os, const Matrix& m)
{
	size_t r, c = 0;
	for(r = 0; r < m.m_rows; r++)
	{
		os << "[";
		for(c = 0; c < m.m_cols; c++)
		{
			if(c == m.m_cols - 1)
			{
				os << m.m_data[r * m.m_cols + c];
			}
			else
			{
				os << m.m_data[r * m.m_cols + c] << " ";
			}
		}
		os << "]";
		os << endl;
	}

	return os;
}

Matrix& Matrix::transpose()
{
	return *this;
}

Matrix& Matrix::flipHorizontal()
{
	return *this;
}

Matrix& Matrix::flipVertical()
{
	return *this;
}

const double& Matrix::determinant() const
{
    static double dummy = 0.0;
    return dummy;
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
    Matrix m(m_rows, m_cols);

    for (size_t i = 0; i < m_data.size(); ++i)
    {
        m.m_data[i] = m_data[i] * scalar;
    }

    return m;
}

Matrix Matrix::operator /(double scalar) const
{
	Matrix m(m_rows, m_cols);

    if (scalar == 0.0)
    {
        throw std::runtime_error("Division by zero in Matrix::operator/");
    }

    for (size_t i = 0; i < m_data.size(); ++i)
    {
        m.m_data[i] = m_data[i] / scalar;
    }

    return m;

}

bool Matrix::operator ==(Matrix rhs) const
{
	return false;
}

const size_t Matrix::getRows() const
{
	return m_rows;
}

const size_t Matrix::getCols() const
{
	return m_cols;
}

Matrix Matrix::operator +(double scalar) const
{
    Matrix m(m_rows, m_cols);

    for (size_t i = 0; i < m_data.size(); ++i)
    {
        m.m_data[i] = m_data[i] + scalar;
    }

    return m;
}

Matrix Matrix::operator -(double scalar) const
{
    Matrix m(m_rows, m_cols);

    for (size_t i = 0; i < m_data.size(); ++i)
    {
        m.m_data[i] = m_data[i] - scalar;
    }

    return m;
}

bool Matrix::operator !=(Matrix rhs) const
{
	return false;
}
