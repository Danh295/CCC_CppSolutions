#include <iostream>

using namespace std;

int main()
{
    int troutPts, pikePts, pickPts;
    int total;

    cin>>troutPts;
    cin>>pikePts;
    cin>>pickPts;
    cin>>total;

    int troutMax = total / troutPts;
    int pikeMax = total / pikePts;
    int pickMax = total / pickPts;
    int count = 0;

    for(int i = 0; i < troutMax+1; i++)
    {
        for(int j = 0; j < pikeMax+1; j++)
        {
            for(int k = 0; k < pickMax+1; k++)
            {
                if(i == 0 && j == 0 && k == 0)
                    continue;
                
                if(i*troutPts + j*pikePts + k*pickPts <= total)
                {
                    cout<<i<<" Brown Trout, "<<j<<" Northern Pike, "<<k<<" Yellow Pickerel"<<endl;
                    count += 1;
                }
            }
        }
    }
    cout<<"Number of ways to catch fish: "<<count;

    return 0;
}