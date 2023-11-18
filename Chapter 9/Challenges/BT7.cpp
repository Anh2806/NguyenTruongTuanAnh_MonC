#include <iostream>
using namespace std;

// Function prototype
int findMode(const int*, int);

int main() {
    const int SIZE = 10;
    int numbers[SIZE] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6};

    int mode = findMode(numbers, SIZE);

    if (mode != -1) {
        cout << "The mode of the array is: " << mode << endl;
    } else {
        cout << "The array has no mode." << endl;
    }

    return 0;
}

int findMode(const int* arr, int size) {
    int* frequency = new int[size]();  // Initialize frequency array to all zeros

    // Count the frequency of each element in the array
    for (int i = 0; i < size; ++i) {
        ++frequency[arr[i]];
    }

    int maxFrequency = 0;
    int mode = -1;

    // Find the mode (most frequent element)
    for (int i = 0; i < size; ++i) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mode = i;
        }
    }

    delete[] frequency;  // Deallocate memory

    return mode;
}
