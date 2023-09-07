#include <iostream>

int main()
{
    int arr[] = {0,4,5,6,2,3,9};

    for( int i : arr)
    {
        if([](int x){return x%2 == 0;}(i))
            std::cout << "element " << i << " is even" << std::endl;
        else
            std::cout << "element " << i << " is odd" << std::endl;
    }
    return 0;
}