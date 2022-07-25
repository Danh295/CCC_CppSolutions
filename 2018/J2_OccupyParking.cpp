#include <iostream>
#include <string>

int countOccupied(int avail, std::string yday, std::string tday)
{
    // MAIN PROCESS

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
    std::string ystday;
    std::string tday;

    // INPUT
    std::cin>>n;
    std::cin>>ystday;
    std::cin>>tday;

    // OUTPUT
    std::cout<<countOccupied(n, ystday, tday);

    return 0;
}