#include <iostream>

int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // init
    int reg, small;
    std::cin >> reg >> small;

    std::cout << (3*small + 8*reg) - 28;
}