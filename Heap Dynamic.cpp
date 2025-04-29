//Heap Dynamic Memory Allocation
// This code demonstrates the use of dynamic memory allocation in C++.
// It uses the new operator to allocate memory on the heap and delete to free it.
// It is a dynamic array, meaning the size can change during the program's execution



#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    for (int val : arr) cout << val << " ";
}
