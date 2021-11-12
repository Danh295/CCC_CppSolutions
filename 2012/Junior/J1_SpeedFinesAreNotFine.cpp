#include <iostream>

using namespace std;

int main()
{
    int limit, s, fine;
    cin>>limit;
    cin>>s;

    if(s <= limit)
        cout<<"Congratulations, you are within the speed limit!";
    else
    {
        if(s < limit + 21)
            fine = 100;
        else if(s < limit + 31)
            fine = 270;
        else 
            fine = 500;
        
        cout<<"You are speeding and your fine is $"<<fine<<".";
    }

    return 0;
}