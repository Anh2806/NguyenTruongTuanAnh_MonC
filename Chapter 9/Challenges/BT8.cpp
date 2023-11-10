#include <iostream>
using namespace std;

// Function prototype
pair<double, double> findMedian(const int*, int);

int main() {
    const int SIZE = 6;
    int numbers[SIZE] = {1, 2, 3, 5, 6, 8};

    pair<double, double> median = findMedian(numbers, SIZE);

    cout << "The median of the array is: " << median.first;
    if (SIZE % 2 == 0) {
        cout << " and " << median.second;
    }
    cout << endl;

    return 0;
}

pair<double, double> findMedian(const int* arr, int size) {
    pair<double, double> median;

    int middle1 = (size - 1) / 2;
    int middle2 = size / 2;

    median.first = (arr[middle1] + arr[middle2]) / 2.0;

    if (size % 2 == 0) {
        median.second = arr[middle2];
    }

    return median;
}
