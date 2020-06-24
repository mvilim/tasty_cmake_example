#include <iostream>

#include "detail/detail1.hpp"
#include "detail/detail2.hpp"

int main()
{
    std::cout << detail1() << std::endl;
    std::cout << detail2() << std::endl;
}
