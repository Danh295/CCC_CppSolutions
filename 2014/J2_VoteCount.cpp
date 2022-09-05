#include <iostream>
#include <string>

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    int total;
    std::cin >> total;
    std::string votes;
    std::cin >> votes;

    int countA = 0;
    int countB = 0;
    for (int i = 0; i < votes.size(); i++) {
        if (votes[i] == 'A') countA += 1;
        else countB += 1;
    }

    if (countA > countB) std::cout << 'A';
    else if (countA < countB) std::cout << 'B';
    else std::cout << "Tie";

    return 0;
}