#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable a and a pointer p to an integer
    int a = 13;
    int* p;

    // Assign the address of a to p
    p = &a;

    // Print the address stored in p and the value of a using p
    cout << "Address stored in p: " << p << endl;
    cout << "Value of a using p: " << *p << endl;

    // Change the value of a using p
    *p = 11;

    // Print the new value of a
    cout << "New value of a: " << a << endl;

    return 0;
}
