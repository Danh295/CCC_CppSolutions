#include <iostream>

int main()
{
    int x;
    int y;

    std::cin>>x;
    std::cin>>y;

    if(x > 0 && y > 0)
        std::cout<<1;
    else if(x > 0 && y < 0)
        std::cout<<4;
    else if(x <0 && y > 0)
        std::cout<<2;
    else
        std::cout<<3;

    return 0;
}