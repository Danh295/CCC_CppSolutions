#include <iostream>

int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // init
    int apress, temp;
    std::cin >> temp;

    apress = 5*temp - 400;

    // conditional output
    std::cout << apress << std::endl;
    if(apress < 100)
        std::cout << 1;
    else if(apress > 100)
        std::cout << -1;
    else  
        std::cout << 1;
        
    return 0;
}