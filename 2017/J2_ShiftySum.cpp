/*
PROBLEM DESCRIPTION:
Suppose we have a number like 12. Let's define "shifting a number" to mean
adding a zero at the end. For example, if we shift that number once, we get
the number 120. If we shift the number again we get the number 1200. We
can shift the number as many times as we want.

In this problem you will be calculating a "shifty sum", which is the sum of a
number and the numbers we get by shifting. Specifically, you will be given
the starting number "N" and a non-negative integer "k". You must add together
"N" and all the numbers you get by shifting a total of "k" times.

For example, the shifty sum when "N" is 12 and "k" is 1 is: 12 + 120 = 132. As
another example, the shifty sum when "N" is 12 and "k" is 3 is
12 + 120 + 1200 + 12000 = 13332.
*/

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