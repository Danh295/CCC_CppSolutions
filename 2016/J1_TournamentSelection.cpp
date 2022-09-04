#include <iostream>

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    char game;
    int wins = 0;
    
    for (int i = 0; i < 6; i++) {
        std::cin >> game;
        if (game == 'W') wins += 1;
    }

    // conditional output
    if (wins >= 5) std::cout << 1;
    else if (wins >= 3) std::cout << 2;
    else if (wins >= 1) std::cout << 3;
    else std::cout << -1;
    
    return 0;
}