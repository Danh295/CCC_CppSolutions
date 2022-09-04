#include <iostream>

int main()
{
    int month, day;
    std::cin >> month;
    std::cin >> day;

    if (month < 2) std::cout<<"Before";
    else if (month > 2) std::cout<<"After";
    else {
        if (day < 18)
            std::cout << "Before";
        else if (day > 18)
            std::cout << "After";
        else
            std::cout << "Special";
    }

    return 0;
}