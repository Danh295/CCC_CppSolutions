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