#include <iostream>

int shiftySum(int num, int shifts)
{
    int sum = num;
    int s = 10;

    // basic for-loop accumulates the shifted values into a sum
    for (int i = 0; i < shifts; i++) {
        sum += num*s;
        s*=10;
    }

    return sum;
}

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    int n, k;

    std::cin >> n;
    std::cin >> k;

    std::cout << shiftySum(n, k);

    return 0;
}