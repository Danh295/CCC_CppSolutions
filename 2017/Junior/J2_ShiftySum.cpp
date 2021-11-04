#include <iostream>

int shiftySum(int num, int shifts)
{
    int sum = num;

    int s = 10;
    for(int i = 0; i < shifts; i++)
    {
        sum += num*s;
        s*=10;
    }

    return sum;
}

int main()
{
    int n, k;
    std::cin>>n;
    std::cin>>k;

    std::cout<<shiftySum(n, k);

    return 0;
}