#include <algorithm>
#include <iostream>
#include <iterator>


int* get_pos(int arr[],int size,int num);

int main()
{
    int num;
    int arr[6] = {1,4,5,6,3,2};
    
    std::cin >> num;
    int *pos = get_pos(arr, 6,num);

    if(pos)
        std::cout << "Index of element " << num << " is " << std::distance(arr,pos) << std::endl;
    else 
        std::cout << "Element not found in the array." << std::endl;

    return 0;
}

int* get_pos(int arr[],int size,int num)
{
    int *indx = std::find(arr,arr+size,num);
    if(indx == arr+size)
        return nullptr;
    return indx;
}