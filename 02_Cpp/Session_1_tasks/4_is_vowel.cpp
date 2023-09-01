#include <iostream>

bool is_vowel(char x);
int main()
{
    char ch;
    std::cin >> ch;

    if(is_vowel(ch))
        std::cout << "vowel" << std::endl;
    else
        std::cout << "consonant" << std::endl;
    return 0;
}

bool is_vowel(char x)
{
    if(x == 'a' || x == 'e' || x == 'u' || x == 'i' || x =='o')
        return true;
    if(x == 'A' || x == 'E' || x == 'U' || x == 'I' || x =='O')
        return true;
    return false;
}