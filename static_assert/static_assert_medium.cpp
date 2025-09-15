#include<iostream>
using namespace std;

// Restrict a function template to only accept floating-point types

template <class T>
T safe_divide(T a, T b){

    static_assert(is_floating_point<T>::value, "safe_divide requires a floating-point type");
    return a/b;
}

int main() {
    cout << safe_divide(10.0, 2.0) << endl;  // OK
    // cout << safe_divide(10, 2) << endl;   // Compile error
    return 0;
}
