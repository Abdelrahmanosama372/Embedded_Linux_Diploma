#include <iostream>

int main()
{
    int num1,num2,num3;
    std::cin >> num1 >> num2 >> num3;
    std::cout << std::max(std::max(num1,num2),num3) << std::endl;
    return 0;
}