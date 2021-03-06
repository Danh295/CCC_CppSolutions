#include <iostream>

using namespace std;

int main()
{
    // INITIALIZATION
    
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d, s;
    int countN = 0;
    int countB = 0;
    int totalN = 0;
    int totalB = 0;
    int ca = 0;
    int cb = 0;
    int cc = 0;
    int cd = 0;

    // INPUT
    cin>>a>>b>>c>>d>>s;

    
    // PROCESS

    // conditional iterative increments
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

    // CONDITIONAL OUTPUTS
    if(totalN > totalB)
        cout<<"Nikky";
    else if(totalB > totalN)
        cout<<"Byron";
    else  
        cout<<"Tied";

    // Better Solution: Mathematical approach; no need for iteration
    // credit to "codingdaddy" on DMOJ
    // int Nsteps = 0;
    // int Bsteps = 0;

    // int Nsets = s/(a+b);
    // int Bsets = s/(c+d);

    // int NRemaining = s%(a+b);
    // int BRemaining = s%(c+d);

    // if(NRemaining <= a)
    //     Nsteps = Nsets * (a-b) + NRemaining;
    // else
    //     Nsteps = Nsets * (a-b) + a-(NRemaining-a);

    // if(BRemaining <= c)
    //     Bsteps = Bsets * (c-d) + BRemaining;
    // else 
    //     Bsteps = Bsets * (c-d) + c-(BRemaining - c);

    // if(Bsteps > Nsteps)
    //     cout<<"Byron";
    // else if(Bsteps < Nsteps)
    //     cout<<"Nikky";
    // else 
    //     cout<<"Tied";

    return 0;
}