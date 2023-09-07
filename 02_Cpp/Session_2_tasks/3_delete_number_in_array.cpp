#include <algorithm>
#include <iostream>

void del_num(int arr[],int &size, int num);

int main()
{
    int num;
    std::cin >> num;

    int arr[] = {3,4,2,6,8,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    del_num(arr, size, num);

    for(int i =0; i<size; i++)
        std::cout << arr[i] << std::endl;
    


    return 0;
}

void del_num(int arr[],int &size, int num)
{
    int *it_num = std::find(arr,arr+size,num);
    if(it_num != arr+size)
        std::copy(it_num+1,arr+size,it_num)
        ,size--;  
}