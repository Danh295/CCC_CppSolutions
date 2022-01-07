#include <iostream>

int main()
{
    // INITILIZATION

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
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