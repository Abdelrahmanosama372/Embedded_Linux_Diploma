#include <iostream>

int main()
{
    int num,sum {0};
    std::cin >> num;

    while (num) 
    {
        sum += num%10;
        num /= 10;
    }
    std::cout << sum << std::endl;

    return 0;
}