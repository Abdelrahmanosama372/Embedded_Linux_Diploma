#include <algorithm>
#include <iostream>

bool is_right(int side1, int side2, int side3);
int main()
{
    int side1,side2,side3;
    std::cin >> side1 >> side2 >> side3;
    if(is_right(side1,side2,side3))
        std::cout << "it is a right angle triangle" << std::endl;
    else
        std::cout << "it is not a right angle triangle" << std::endl;
    

    return 0;
}

bool is_right(int side1, int side2, int side3)
{
    int bigger_side = std::max(std::max(side1,side2),side3);
    if(bigger_side == side1)
        return side1*side1 == side2*side2 + side3*side3;
    else if(bigger_side == side2)
        return side2*side2 == side1*side1 + side3*side3;
    else 
        return side3*side3 == side1*side1 + side2*side2;

}