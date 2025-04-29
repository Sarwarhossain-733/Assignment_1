
// Stack Dynamic Memory Allocation in C++
// This code demonstrates the use of stack dynamic memory allocation in C++.
// It uses a fixed-size array to allocate memory on the stack. The size is known at compile time.
// The array is automatically deallocated when it goes out of scope.
// This is a simple example of stack dynamic memory allocation in C++.


#include <iostream>
using namespace std;

int main() {
    int arr[5]; // Size known at compile time
    for (int i = 0; i < 5; i++) arr[i] = i * 10;
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
}
