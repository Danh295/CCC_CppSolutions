#include <iostream>

// PROCESS
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
    // INITIALIZATION

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int p;
    int n;
    int r;

    // INPUT
    std::cin>>p;
    std::cin>>n;
    std::cin>>r;
    
    // OUTPUT
    std::cout<<calcDays(p,n,r);

    return 0;
}