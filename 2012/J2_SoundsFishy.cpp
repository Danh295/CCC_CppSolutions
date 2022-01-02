#include <iostream>

int main()
{
    // INITILIZATION
    int a, b, c, d;

    // INPUT
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cin>>d;

    // CONDITIONAL PROCESSING & OUTPUT
    if(a < b && b < c && c < d)
        std::cout<<"Fish Rising";
    else if(a > b && b > c && c > d)
        std::cout<<"Fish Diving";
    else if(a == b && b == c && c == d)
        std::cout<<"Fish Constant";
    else
        std::cout<<"No Fish";

    return 0;
}