#include <iostream>

int main()
{
    int s;
    int m;
    int l;
    std::cin>>s;
    std::cin>>m;
    std::cin>>l;

    int score = s + 2*m + 3*l;
    if(score >= 10)
        std::cout<<"happy";
    else
        std::cout<<"sad";

    return 0;
}