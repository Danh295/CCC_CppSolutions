#include <iostream>
#include <string>

using namespace std;

int countOccupied(int avail, string yday, string tday)
{
    int occupied = 0;
    int i = 0;
    while(i < avail)
    {
        if(yday[i] == 'C' && tday[i] == 'C')
            occupied += 1;
        i++;
    }

    return occupied;
}

int main()
{
    int n;
    string ystday;
    string tday;
    cin>>n;
    cin>>ystday;
    cin>>tday;

    cout<<countOccupied(n, ystday, tday);

    return 0;
}