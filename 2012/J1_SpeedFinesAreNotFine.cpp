#include <iostream>

int main()
{
    // INITILIZATION

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int limit, s, fine;

    // INPUT
    std::cin>>limit;
    std::cin>>s;

    // CONDITIONAL PROCESSING & OUTPUTS
    if(s <= limit)
        std::cout<<"Congratulations, you are within the speed limit!";
    else
    {
        if(s < limit + 21)
            fine = 100;
        else if(s < limit + 31)
            fine = 270;
        else 
            fine = 500;
        
        std::cout<<"You are speeding and your fine is $"<<fine<<".";
    }

    return 0;
}