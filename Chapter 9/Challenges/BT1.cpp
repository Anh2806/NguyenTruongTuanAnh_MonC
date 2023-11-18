#include <iostream>
using  namespace std;

int *allocateIntArray(int numElemnts){
    int *newArray = new int[numElemnts];
    return newArray;
}
int main(){
    int *myArray = allocateIntArray(10);
    delete[] myArray;
    return 0;
}