#include <iostream>

int groupPlayer(int wins)
{
    if(wins >= 5)
        return 1;
    else if(wins >= 3)
        return 2;
    else if(wins >= 1)
        return 3;
    else
        return -1;
}

int main()
{
    char game;
    int wins = 0;
    
    for(int i = 0; i < 6; i++)
    {
        std::cin >> game;
        if(game == 'W')
            wins += 1;
    }

    std::cout << groupPlayer(wins);
    
    return 0;
}