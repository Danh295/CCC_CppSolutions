#include <iostream>

// MAIN PROCESS
    // returns shifty sum
int shiftySum(int num, int shifts)
{
    int sum = num;
    int s = 10;

    // basic for-loop accumulates the shifted values into a sum
    for(int i = 0; i < shifts; i++)
    {
        sum += num*s;
        s*=10;
    }

    return sum;
}

int main()
{
    // INTITIALIZATION
    int n, k;

    // INPUT
    std::cin>>n;
    std::cin>>k;

    // OUTPUT
    std::cout<<shiftySum(n, k);

    return 0;
}