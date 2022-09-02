#include <iostream>
#include <string>

int countOccupied(int avail, std::string yday, std::string tday)
{
    //init
    int occupied = 0;
    int i = 0;

    //process
        //while loop compares parking spots of both days
    while (i < avail) {
        if (yday[i] == 'C' && tday[i] == 'C') //condition to update return value
            occupied += 1;
        i++;
    }

    return occupied;
}

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    int n;
    std::string ystday;
    std::string tday;

    std::cin >> n;
    std::cin >> ystday;
    std::cin >> tday;

    std::cout << countOccupied(n, ystday, tday);

    return 0;
}