#include <algorithm>
#include <iostream>


int* get_max(int arr[],int size);

int main()
{
    int arr[6] = {1,4,5,6,3,2};
    std::cout << *get_max(arr, 6) << std::endl;
    return 0;
}

int* get_max(int arr[],int size)
{
    return std::max_element(arr,arr+size);
}
