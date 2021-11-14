#include <iostream>

using namespace std;

int main()
{
    int p;
    int n;
    int r;
    cin>>p;
    cin>>n;
    cin>>r;

    int day = 0;
    int total = 0;
    while(total < p)
    {
        cout<<day<<": "<<n<<endl;  
        n *= r;
        total += n;
        day += 1;
    }

    cout<<day;

    return 0;
}