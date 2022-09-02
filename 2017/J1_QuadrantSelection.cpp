#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int x;
    int y;

    std::cin >> x;
    std::cin >> y;

    if (x > 0 && y > 0) std::cout << 1;
    else if (x > 0 && y < 0) std::cout << 4;
    else if (x <0 && y > 0) std::cout << 2;
    else std::cout << 3;

    return 0;
}