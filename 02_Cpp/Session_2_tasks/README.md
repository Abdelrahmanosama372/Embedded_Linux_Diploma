## 1 Maximum Number Of Array

### Function:  `int* get_max(int arr[],int size)`

this function finds the maximum number in an array.

**Parameters:**
- `arr[]` (number): this parameter is pointer to the begining of the array.
- `size` (number): this parameter represents the array size.


**Output:**
- return integer pointer to the address of the maximum integer in the array.

Sample input:
```cpp
// array is: int arr[6] = {1, 4, 5, 6, 3, 2};
//std::cout << *get_max(arr, 6) << std::endl;
```
Sample output:
```bash
6
```
---

## 2 Search In Array

### Function:  `int* get_pos(int arr[],int size,int num)`

this function searches for a number entered by a user in an array.

**Parameters:**
- `arr[]` (number): this parameter is pointer to the begining of the array.
- `size` (number): this parameter represents the array size.
- `num` (number): represents the number that the user want to search for.


**Output:**
- return pointer to the element that searched for if exists otherwise return null pointer.

Sample input:
```cpp
//array is: int arr[6] = {1,4,5,6,3,2}
4
```
Sample output:
```bash
Idex of element 4 is 1
```
---

## 3 Delete Number In Array

### Function:  `void del_num(int arr[],int &size, int num)`

this function deletes a number entered by the user from the array if it exists.

**Parameters:**
- `arr[]` (number): this parameter is pointer to the begining of the array.
- `&size` (number): this parameter represents the array size.
- `num` (number): represents the number that user want to delete


**Output:**
- no output.

Sample input:
```cpp
//array is: int arr[] = {3,4,2,6,8,1,5}
2
```
Sample output:
```bash
3 4 6 8 1 5
```
---

## 4 Merge Two Arrays
this task is to merge two arrays in one array.

Sample input:
```cpp
// int arr1[6] = {1,2,3,4,5,6};
// int arr2[5] = {7,8,9,10,11};
// int arr3[11];
```
Sample output:
```bash
# printing arr3 elements after merge arr1 and arr2 in it.
1 2 3 4 5 6 7 8 9 10 11
```
---
## 5 Find Even Odd Nums In Array

### Task:
this task is to find the even and the odd values in an array and to print them.

Sample input:
```cpp
// array is: int arr[] = {0,4,5,6,2,3,9};
```
Sample output:
```bash
element 0 is even
element 4 is even
element 5 is odd
element 6 is even
element 2 is even
element 3 is odd
element 9 is odd
```

---
## 6 Square Of Number

### Task:
this task is to find square of number using lambda function.

Sample input:
```cpp
4
```
Sample output:
```bash
16
```
---

## 7 Sort By Lambda Function

### Task:
this task is to sort an array in ascending and descending order using lambda function.

Sample output:
```bash
array: 2 5 3 7 10 39 53 93 92 32 38 
array sorted in ascending order: 2 3 5 7 10 32 38 39 53 92 93 
array sorted in descending order: 93 92 53 39 38 32 10 7 5 3 2 
```
---