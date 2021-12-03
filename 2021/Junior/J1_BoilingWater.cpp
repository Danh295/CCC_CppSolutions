#include <iostream>

int main()
{
    int apress;
    int temp;
    std::cin>>temp;

    apress = 5*temp - 400;
    std::cout<<apress<<std::endl;
    if(apress < 100)
        std::cout<<1;
    else if(apress > 100)
        std::cout<<-1;
    else  
        std::cout<<1;
        
    return 0;
}