#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    for(int i=0; i < 13; i++)
        std::cout << i << " x " << num << " = " << i*num << std::endl; 
    return 0;
}