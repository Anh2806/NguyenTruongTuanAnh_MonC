#include <iostream>
using namespace std;

// Function prototype
int* reverseArray(const int*, int);

int main() {
    const int SIZE = 5;
    int originalArray[SIZE] = {1, 2, 3, 4, 5};

    // Create a reversed copy of the array
    int* reversedArray = reverseArray(originalArray, SIZE);

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    // Display the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    // Clean up dynamic memory
    delete[] reversedArray;

    return 0;
}

int* reverseArray(const int* arr, int size) {
    // Create a new array
    int* reversedArr = new int[size];

    // Copy and reverse the elements
    for (int i = 0; i < size; ++i) {
        reversedArr[i] = arr[size - 1 - i];
    }

    return reversedArr;
}
