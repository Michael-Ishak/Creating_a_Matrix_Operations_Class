#ifndef __MATRIX__ // Checks if MATRIX has been defined when called in the cpp file, if not it will define
#define __MATRIX__

#include <iostream>

class Matrix_Operations{
    public:
        Matrix_Operations(int, int); // Initialise each element in a new matrix object with 0, inputs are rows x columns
        Matrix_Operations(double**, int, int); // Copies elements from the member function above and allocates exactly the amount of sapce needed for it
        Matrix_Operations(); // if there any no rows or columns, it initialises a 1x1 matrix to 0 and allocates the respective space
        ~Matrix_Operations();  // destructor to delete the allocated space
        Matrix_Operations(const Matrix_Operations&); // Copies the matrix that the pointer points to and applies to to the matrix being defined above
};


#endif // End of ifndef check