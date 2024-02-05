#ifndef __MATRIX__ // Checks if MATRIX has been defined when called in the cpp file, if not it will define
#define __MATRIX__

#include <iostream>

class Matrix_Operations
{
public:
    Matrix_Operations(int, int);                  // Initialise each element in a new matrix object with 0, inputs are rows x columns
    Matrix_Operations(double **, int, int);       // Copies elements from the member function above and allocates exactly the amount of sapce needed for it
    Matrix_Operations();                          // if there any no rows or columns, it initialises a 1x1 matrix to 0 and allocates the respective space
    ~Matrix_Operations();                         // destructor to delete the allocated space
    Matrix_Operations(const Matrix_Operations &); // Copies the matrix that the pointer points to and applies to to the matrix being defined above
    Matrix_Operations &operator=(const Matrix_Operations &); // Return reference of the copied constructor variable

    inline double &operator()(int x, int y); // Overload function call operator to access x and y indices and return the adress of the elements

    Matrix_Operations &operator+=(const Matrix_Operations &); // Overleads the += operator to add matrices, and returns reference to self for chain operations
    Matrix_Operations &operator-=(const Matrix_Operations &); // Overloads the -= operator to subtract matrices, and returns reference to self for chain operations
    Matrix_Operations &operator*=(const Matrix_Operations &); // Overloads the *= operator to do element-wise multiplication, and returns reference to self for chain operations
    Matrix_Operations &operator*=(double); // Scales the matrix by multiplying double value
    Matrix_Operations &operator/=(double); // Scales the matrix by dividing double value
    Matrix_Operations operator^(int); // Integer power rule
};

#endif // End of ifndef check