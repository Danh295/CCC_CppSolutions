/*
PROBLEM DESCRIPTION:
You supervise a small parking lot which has 'N' parking spaces.

Yesterday, you recorded which parking spaces were occupied by cars and which were empty.

Today, you recorded the same information.

How many of the parking spaces were occupied both yesterday and today?
*/
#include <iostream>
#include <string>

using namespace std;

int countOccupied(int avail, string yday, string tday)
{
    // process
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
    // init
    int n;
    string ystday;
    string tday;

    // input
    cin>>n;
    cin>>ystday;
    cin>>tday;

    // output
    cout<<countOccupied(n, ystday, tday);

    return 0;
}