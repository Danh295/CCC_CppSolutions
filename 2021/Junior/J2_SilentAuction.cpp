#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    int n;
    std::cin>>n;

    std::string nm;
    int amt;
    std::cin>>nm;
    std::cin>>amt;
    std::string hNm = nm;
    int hAmt = amt;
    for(int i = 1; i < n; i++)
    {
        std::cin>>nm;
        std::cin>>amt;
        if(amt > hAmt)
        {
            hNm = nm;
            hAmt = amt;
        }
    }

    std::cout<<hNm;

    return 0;
}