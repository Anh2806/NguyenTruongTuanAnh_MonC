#include <iostream>
using namespace std;

// Function prototype
int* doubleArray(const int*, int);

int main() {
    const int SIZE = 5;
    int originalArray[SIZE] = {1, 2, 3, 4, 5};

    // Double the size of the array
    int* newArray = doubleArray(originalArray, SIZE * 2);

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    // Display the new array
    cout << "New Array: ";
    for (int i = 0; i < SIZE * 2; ++i) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    // Clean up dynamic memory
    delete[] newArray;

    return 0;
}

int* doubleArray(const int* arr, int newSize) {
    // Create a new array with double the size
    int* newArr = new int[newSize];

    // Copy the content of the original array to the new array
    for (int i = 0; i < newSize / 2; ++i) {
        newArr[i] = arr[i];
    }

    // Initialize the remaining elements in the new array to 0
    for (int i = newSize / 2; i < newSize; ++i) {
        newArr[i] = 0;
    }

    return newArr;
}
