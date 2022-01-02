#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int swaps = 0;
    string shelf;
    cin>>shelf;

    int lNum = 0;
    int mNum = 0;
    int sNum = 0;

    for(int i = 0; i < shelf.size(); i++)
    {
        if(shelf[i] == 'L')
            lNum += 1;
        else if(shelf[i] == 'M')
            mNum += 1;
        else 
            sNum += 1;
    }

    // implement sliding window algorithm?
    // initial loop:
    int m_in_l = 0;
    int s_in_l = 0;
    for(int i = 0; i < lNum; i++)
    {
        if(shelf[i] == 'M')
            m_in_l += 1;
        else
            s_in_l += 1;
    }

    
    return 0;
}