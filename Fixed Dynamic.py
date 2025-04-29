# Fixed Dynamic Array
# This code demonstrates how to create a fixed-size dynamic array in Python
# # using a list and how to initialize it with a specific size.
# The array is initialized with zeros, and then each element is set to its index.
# This is a simple example of a fixed dynamic array in Python.
n = int(input("Enter size: "))
arr = [0] * n # Create a fixed-size dynamic array
for i in range(n):
    arr[i] = i
print(arr)
