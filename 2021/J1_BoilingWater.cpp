#include <iostream>

int main() {
    // INITIALIZATION

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int apress, temp;

    // INPUT
    std::cin>>temp;

    // PROCESS
    apress = 5*temp - 400;

    // CONDITIONAL OUTPUT
    std::cout<<apress<<std::endl;
    if(apress < 100)
        std::cout<<1;
    else if(apress > 100)
        std::cout<<-1;
    else  
        std::cout<<1;
        
    return 0;
}