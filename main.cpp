#include <iostream>
#include "func.h"

int main()
{
    std::cout << "===================================================================" << std::endl;
    std::cout << "Dichotomy: " << std::endl;
    dichotomy(4, 8, 10e-3);
    std::cout << "===================================================================" << std::endl;
    std::cout << "Hordes: " << std::endl;
    hordes(4, 8, 10e-3);
    std::cout << "===================================================================" << std::endl;
    return 0;
}
