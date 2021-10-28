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
    // PROCESS

    //init
    int occupied = 0;
    int i = 0;

    //process
        //while loop compares parking spots of both days
    while(i < avail)
    {
        if(yday[i] == 'C' && tday[i] == 'C') //condition to update return value
            occupied += 1;
        i++;
    }

    //output
    return occupied;
}

int main()
{
    // INITILIZATION
    int n;
    string ystday;
    string tday;

    // INPUT
    cin>>n;
    cin>>ystday;
    cin>>tday;

    // OUTPUT
    cout<<countOccupied(n, ystday, tday);

    return 0;
}