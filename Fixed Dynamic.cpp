// Fixed Dynamic Array
// This code demonstrates the use of a fixed-size array in C++.
// It uses a variable-length array (VLA) to allocate memory on the stack.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n]; // variable-length array
    for (int i = 0; i < n; i++) arr[i] = i;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
