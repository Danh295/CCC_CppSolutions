#include <iostream>

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    int y, m;
    std::cin >> y;
    std::cin >> m;

    std::cout << m + (m - y); // simple arithmetic, just keep in mind of bedmas

    return 0;
}