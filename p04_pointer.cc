#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate an array of 5 integers
    int (*p)[5] = new int[1][5];  // allocate 1 array of 5 ints

    // Fill and print
    for (int i = 0; i < 5; ++i) {
        (*p)[i] = i * 10;
        cout << (*p)[i] << " ";
    }
    cout << endl;

    // Clean up
    delete[] p;

    return 0;
}
