#include <iostream>

int main()
{
    int p;
    int n;
    int r;
    
    std::cin>>p;
    std::cin>>n;
    std::cin>>r;

    int day = 0;
    int total = 0;

    while(total < p)
    {
        std::cout<<day<<": "<<n<<std::endl;  
        n *= r;
        total += n;
        day += 1;
    }

    std::cout<<day;

    return 0;
}