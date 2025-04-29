//fixed heap dynamic memory allocation
// This code demonstrates the use of dynamic memory allocation in C++.
// It uses the new operator to allocate memory on the heap and delete to free it.
// It is a fixed-size array, meaning the size is determined at runtime but remains constant during the program's execution


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int* arr = new int[n]; // Memory allocated on heap
    for (int i = 0; i < n; i++) arr[i] = i * 2;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    delete[] arr; // Free memory
}
