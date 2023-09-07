#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    std::cout << [](int num){return num*num;}(num) << std::endl;

    return 0;
}