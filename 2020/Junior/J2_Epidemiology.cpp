#include <iostream>

int calcDays(int p, int n, int r)
{
    int day = 0;
    int total = 0;

    while(total < p)
    {
        std::cout<<day<<": "<<n<<std::endl;  
        n *= r;
        total += n;
        day += 1;
    }

    return day;
}

int main()
{
    int p;
    int n;
    int r;

    std::cin>>p;
    std::cin>>n;
    std::cin>>r;
    
    std::cout<<calcDays(p,n,r);

    return 0;
}