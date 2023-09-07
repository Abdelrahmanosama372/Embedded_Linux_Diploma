#include <algorithm>
#include <iostream>

int main()
{
    int arr[] = {2,5,3,7,10,39,53,93,92, 32,38};
    int size = sizeof(arr)/sizeof(arr[0]);

    std::cout << "array: ";
    for(int i: arr)
        std::cout << i << " ";
    std::cout << "\n";


    // sorting array in ascending order
    std::sort(arr,arr+size);

    std::cout << "array sorted in ascending order: ";
    for(int i: arr)
        std::cout << i << " ";
    std::cout << "\n";

    // sorting array in descending order
    std::sort(arr,arr+size,[](int num1,int num2){return num1 > num2;});

    std::cout << "array sorted in descending order: ";
    for(int i: arr)
        std::cout << i << " ";
    std::cout << "\n";



    return 0;
}