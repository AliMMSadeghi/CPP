#include<iostream>
using namespace std;

int main(){

    // Won't get compiled if the condition sizeof(int)==4 is false!
    static_assert(sizeof(int)==4, "int must be 4 bytes on this platform");

    cout << "All good: int is 4 bytes." << endl;

    return 0;
}