#include <iostream>

int calcDays(int p, int n, int r)
{
    int day = 0;
    int total = 0;


    while(total < p) {
        std::cout << day << ": "<<n<<"\n";  
        n *= r;
        total += n;
        day += 1;
    }

    return day;
}

int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // init
    int p;
    int n;
    int r;

    std::cin >> p;
    std::cin >> n;
    std::cin >> r;

    std::cout << calcDays(p,n,r);

    return 0;
}