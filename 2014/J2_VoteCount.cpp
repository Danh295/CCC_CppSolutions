#include <iostream>
#include <string>

using namespace std;

int main()
{
    int total;
    cin>>total;
    string votes;
    cin>>votes;

    int countA = 0;
    int countB = 0;
    for(int i = 0; i < votes.size(); i++)
    {
        if(votes[i] == 'A')
            countA += 1;
        else
            countB += 1;
    }

    if(countA > countB)
        cout<<'A';
    else if(countA < countB)
        cout<<'B';
    else
        cout<<"Tie";

    return 0;
}