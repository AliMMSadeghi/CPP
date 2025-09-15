#include<iostream>
using namespace std;


template <int N>
struct Factorial {
    static constexpr int value = N * Factorial<N-1>::value;
};

template <>
struct Factorial<0> {
    static constexpr int value = 1;
};

int main() {
    constexpr int fact5 = Factorial<5>::value; // computed at compile time

    cout << fact5 << endl;
    
    return 0;
}
