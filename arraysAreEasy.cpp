#include <iostream>
using namespace std;

int main() {
    // Define dimensions
    int x = 2, y = 3, z = 4;

    // Create a 3D array
    int array_3d[2][3][4];

    // Populate the array with some values
    int counter = 1;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                array_3d[i][j][k] = counter;
                counter++;
            }
        }
    }

    // Print the 3D array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << array_3d[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
