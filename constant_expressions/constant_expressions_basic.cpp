#include<iostream>
using namespace std;

// A constexpr function can run both at compile time (if args are constexpr)
// and at runtime (if args are not constexpr).

constexpr int square(int x) {
    return x * x;
}

int main() {
    int runtime = 4;

    constexpr int a = square(5);    // Ealuated at compile time
    cout << a << endl;

    int b = square(runtime);        // Works, but runtime eval (since runtime not constexpr)
    cout << b << endl;
}