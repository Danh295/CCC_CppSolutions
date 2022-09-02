#include <iostream>

int main()
{
    // init
    int aPts = 0;
    int bPts = 0;
    int temp;

    // values are updated with each input
    // loops not necessary since there are so little inputs: this is technically faster, but more tedius to type out
    std::cin >> temp;
    aPts += temp*3;
    temp = 0;

    std::cin >> temp;
    aPts += temp*2;
    temp = 0;

    std::cin >> temp;
    aPts += temp;
    temp = 0;

    std::cin >> temp;
    bPts += temp*3;
    temp = 0;

    std::cin >> temp;
    bPts += temp*2;
    temp = 0;

    std::cin >> temp;
    bPts += temp*1;
    temp = 0;

    // conditional output
    std::cout << aPts << ", " << bPts << std::endl;
    if (aPts > bPts) std::cout << 'A';
    else if (bPts > aPts) std::cout << 'B';
    else std::cout << 'T';

    return 0;
}