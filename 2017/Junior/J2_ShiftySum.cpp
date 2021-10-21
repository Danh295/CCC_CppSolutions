#include <iostream>

using namespace std;

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
    cin>>n;
    cin>>k;

    cout<<shiftySum(n, k);

    return 0;
}