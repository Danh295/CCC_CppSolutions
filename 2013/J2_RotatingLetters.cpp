#include <iostream>
#include <string>

std::string letrs = "IOSHZXN";

std::string useOnSign(std::string sign)
{
    bool inLetrs;
    for(auto &i: sign)
    {
        inLetrs = false;
        for(auto &j: letrs)
        {
            if(i == j)
            {
                inLetrs = true;
                break;
            }
        }
        if(!inLetrs)
            return "NO";
    }
    return "YES";
}

int main()
{
    std::string sign;
    std::cin>>sign;

    std::cout<<useOnSign(sign);

    return 0;
}