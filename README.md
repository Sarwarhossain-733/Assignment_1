# Dynamic Array Demonstrations

This repository contains examples demonstrating different types of dynamic and fixed-size memory allocation techniques in **C++** and **Python**. Each file provides a simple implementation of how arrays can be managed using either **stack** or **heap** memory.

---

## 🔧 File Structure and Descriptions

### 1. **Fixed Size Arrays**

#### ✅ `Fixed Dynamic.cpp`
- Demonstrates the use of a **Variable Length Array (VLA)** in C++.
- Memory is allocated on the **stack**.
- Size is determined at **runtime**.
- **Note**: VLAs are not part of the standard C++, but supported by some compilers.

#### ✅ `Fixed Dynamic.py`
- Implements a fixed-size dynamic array using Python lists.
- Array is pre-filled with zeros and each element is set to its index.

---

### 2. **Heap Fixed Dynamic Arrays**

#### ✅ `Fixed Heap Dynamic.cpp`
- Allocates a fixed-size array on the **heap** using `new`.
- Memory must be manually freed using `delete[]`.
- The size is fixed after allocation.

#### ✅ `Fixed Heap Dynamic.py`
- Similar to its C++ counterpart.
- A list is initialized with `None` and values are set as index × 2.

---

### 3. **Heap Fully Dynamic Arrays**

#### ✅ `Heap Dynamic.cpp`
- Uses `std::vector` for fully dynamic arrays.
- The array grows during execution using `push_back`.

#### ✅ `Heap Dynamic.py`
- Uses Python’s built-in list and `append()` to dynamically grow the array at runtime.

---

### 4. **Stack Static Arrays**

#### ✅ `Stack Dynamic.cpp`
- Demonstrates stack allocation with a fixed-size array defined at **compile time**.
- Memory is automatically managed (deallocated when out of scope).

#### ✅ `Stack Dynamic.py`
- Simulates a static stack array with a fixed-length list.
- Array is initialized and filled at runtime, but the size is constant.

---

## 📌 Notes
- C++ files demonstrate both **manual** and **automatic** memory management.
- Python files rely on Python’s **built-in memory management**, mimicking C++ behaviors for educational comparison.
- This set of files is useful for understanding **memory allocation** types:
  - Stack vs Heap
  - Fixed vs Dynamic
  - Manual vs Automatic management

---

## 💻 How to Run

### C++
Use a compiler like `g++`:

```bash
g++ filename.cpp -o output
./output
