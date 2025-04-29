# Fixed heap dynamic array
# This code demonstrates how to create a fixed-size dynamic array in Python
# The array is initialized with None, and then each element is set to its index multiplied by 2.

n = int(input("Enter size: "))
arr = [None] * n  # Allocated but fixed
for i in range(n):
    arr[i] = i * 2
print(arr)
