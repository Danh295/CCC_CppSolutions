#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d, s, countN, countB, totalN, totalB, ca, cb, cc, cd;
    cin>>a>>b>>c>>d>>s;

    countN = 0;
    countB = 0;
    totalN = 0;
    totalB = 0;
    ca = 0;
    cb = 0;
    cc = 0;
    cd = 0;

    while(countN < s)
    {
        if(cb == b)
        {
            ca = 0;
            cb = 0;
        }

        if(ca != a)
        {
            totalN += 1;
            ca += 1;
        }
        else if(cb != b)
        {
            totalN -= 1;
            cb += 1;
        }
        countN += 1;
    }

    while(countB < s)
    {
        if(cd == d)
        {
            cc = 0;
            cd = 0;
        }

        if(cc != c)
        {
            totalB += 1;
            cc += 1;
        }
        else if(cd != d)
        {
            totalB -= 1;
            cd += 1;
        }
        countB += 1;
    }

    if(totalN > totalB)
        cout<<"Nikky";
    else if(totalB > totalN)
        cout<<"Byron";
    else  
        cout<<"Tied";

    return 0;
}