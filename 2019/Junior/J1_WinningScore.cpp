/*
You record all of the scoring activity at a basketball game. Points are scored
by a 3-point shot, a 2-piont field goal, or a 1-point free throw.

You know the number of each of these types of scoring for teh two teams:
the Apples and the Bananas. Your job is to determine which team won, or if
the game ended in a tie.
*/

#include <iostream>

using namespace std;

int main()
{
    int aPts = 0;
    int bPts = 0;
    int temp;

    cin>>temp;
    aPts += temp*3;
    temp = 0;

    cin>>temp;
    aPts += temp*2;
    temp = 0;

    cin>>temp;
    aPts += temp;
    temp = 0;

    cin>>temp;
    bPts += temp*3;
    temp = 0;

    cin>>temp;
    bPts += temp*2;
    temp = 0;

    cin>>temp;
    bPts += temp*1;
    temp = 0;

    cout<<aPts<<", "<<bPts<<endl;
    if(aPts > bPts)
        cout<<'A';
    else if(bPts > aPts)
        cout<<'B';
    else
        cout<<'T';

    return 0;
}