#include <iostream>

int main()
{
    // INITIALIZATION

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int s;
    int m;
    int l;

    // INPUT
    std::cin>>s;
    std::cin>>m;
    std::cin>>l;

    // CONDITIONAL OUTPUT
    int score = s + 2*m + 3*l;
    if(score >= 10)
        std::cout<<"happy";
    else
        std::cout<<"sad";

    return 0;
}