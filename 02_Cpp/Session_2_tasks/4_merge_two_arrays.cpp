#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[5] = {7,8,9,10,11};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[11];

    // merge arr1 and arr2 and put their elements in arr3
    std::merge(arr1,arr1+size1,arr2,arr2+size2,arr3);

    for(int num : arr3)
        std::cout << num << " ";
    std::cout << "\n" << std::endl;

    return 0;
}