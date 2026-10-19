#include <iostream>
#include <cmath>

int main(void)
{
    float a, b, h, x; 
    std::cout << "Начална стойност: "; std::cin  >> a; 
    std::cout << "Крайна стойност: "; std::cin  >> b; 
    std::cout << "Стъпка: "; std::cin  >> h;
    
    for(x = a; x <=b; x+= h)
    {
        std::cout << x << " " << sin(x) << '\n'; 
    }
    return 0;
}