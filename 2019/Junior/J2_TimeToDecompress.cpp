#include <iostream>
#include <string>

int main()
{
    int lines;
    std::cin>>lines;
    for(int i = 0; i < lines; i++)
    {
        int n;
        char s;
        std::cin>>n;
        std::cin>>s;
        for(int j = 0; j < n; j++)
        {
            std::cout<<s;
        }
        std::cout<<std::endl;
    }

    return 0;
}