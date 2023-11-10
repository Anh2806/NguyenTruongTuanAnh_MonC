#include <iostream>
using namespace std;

void arrSelectSort(int *[], int);
void showArry(const int [], int);
void showArrPtr(int *[], int);

int main()
{
    const int NUM_DONATIONS = 15;
    int donations[NUM_DONATIONS];

    // Nhập giá trị quyên góp từ người dùng
    cout << "Enter " << NUM_DONATIONS << " donation values:" << endl;
    for (int count = 0; count < NUM_DONATIONS; count++)
    {
        cout << "Donation " << (count + 1) << ": ";
        cin >> donations[count];
    }

    int *arrPtr[NUM_DONATIONS] = {nullptr, nullptr, nullptr, nullptr, nullptr,
                                nullptr, nullptr, nullptr, nullptr, nullptr, 
                                nullptr, nullptr, nullptr, nullptr, nullptr};
    for (int count = 0; count < NUM_DONATIONS; count++)
        arrPtr[count] = &donations[count];

    arrSelectSort(arrPtr, NUM_DONATIONS);

    cout << "The donations, sorted in ascending order are:" << endl;
    showArrPtr(arrPtr, NUM_DONATIONS);

    return 0;
}

void arrSelectSort(int *arr[], int size)
{
    int startScan, minIndex;
    int *minElem;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (*(arr[index]) < *minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}
