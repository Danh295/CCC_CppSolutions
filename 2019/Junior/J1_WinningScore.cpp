/*
PROGRAM DESCRIPTION:
You record all of the scoring activity at a basketball game. Points are scored
by a 3-point shot, a 2-piont field goal, or a 1-point free throw.

You know the number of each of these types of scoring for teh two teams:
the Apples and the Bananas. Your job is to determine which team won, or if
the game ended in a tie.
*/

#include <iostream>

int main()
{
    // INITILIZATION
    int aPts = 0;
    int bPts = 0;
    int temp;

    // INPUT
        // values are updated with each input
        // loops not necessary since there are so little inputs: this is technically faster, but more tedius to type out
    std::cin>>temp;
    aPts += temp*3;
    temp = 0;

    std::cin>>temp;
    aPts += temp*2;
    temp = 0;

    std::cin>>temp;
    aPts += temp;
    temp = 0;

    std::cin>>temp;
    bPts += temp*3;
    temp = 0;

    std::cin>>temp;
    bPts += temp*2;
    temp = 0;

    std::cin>>temp;
    bPts += temp*1;
    temp = 0;

    // MAIN PROCESS
        // if conditions check for corresponding outputs
    std::cout<<aPts<<", "<<bPts<<std::endl;
    if(aPts > bPts)
        std::cout<<'A';
    else if(bPts > aPts)
        std::cout<<'B';
    else
        std::cout<<'T';

    return 0;
}