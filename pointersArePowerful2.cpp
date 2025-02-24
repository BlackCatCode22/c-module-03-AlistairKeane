#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Create an array of integers with 5 elements

    int *p = arr; // Initialize pointer p to point to the first element of the array

    // Print the address of each element in the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "]: " << (p + i) << endl;
    }

    // Increment pointer to traverse the array and print each value
    for (int i = 0; i < 5; i++) {
        cout << "Value of arr[" << i << "] using pointer: " << *(p + i) << endl;
    }

    return 0;
}
