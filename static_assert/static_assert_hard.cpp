#include<iostream>
#include<array>
using namespace std;

// Enforce conditions in a templated data structure at compile time

template <size_t Rows, size_t Cols>
struct Matrix {
    static_assert(Rows > 0 && Cols > 0, "Matrix dimensions must be positive");
    static_assert(Rows == Cols, "Only square matrices are supported");

    array<array<double, Cols>, Rows> data;
};

int main() {
    Matrix<3,3> m1;   // Compiles
    // Matrix<0,3> m2; // Error: dimensions must be positive
    // Matrix<2,3> m3; // Error: must be square
    cout << "Square matrix compiled successfully!" << endl;
    return 0;
}
