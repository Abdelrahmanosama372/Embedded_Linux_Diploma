#include <iostream>
#include <bitset>
#include <string>

int main()
{
    int num;
    std::cout << "Enter a decimal value: ";
    std::cin >> num;
    std::bitset<32> dec_to_bin(num);

    std::cout << "Binary representation: " << dec_to_bin << std::endl;

    std::cout << "Enter a binary value: ";
    std::cin >> num;
    std::bitset<32> bin_to_dec(std::to_string(num));
    std::cout << "Decimal representation: " << bin_to_dec.to_ulong() << std::endl;
    

   
    return 0;
}
