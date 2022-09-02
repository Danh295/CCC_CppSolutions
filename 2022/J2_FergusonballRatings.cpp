#include <iostream>

int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // init
    int numPlayers;
    int count = 0;
    int pts, fouls;
    bool star = true;

    std::cin >> numPlayers;

    for (int i = 0; i < numPlayers; i++) {
        std::cin>>pts>>fouls;
        if ((pts*5) - (fouls*3) > 40) {
            count += 1;
        } else {
            star = false;
        }
    }

    std::cout << count;
    if (star) std::cout<<"+";
}