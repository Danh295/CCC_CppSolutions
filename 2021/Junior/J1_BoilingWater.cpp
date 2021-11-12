#include <iostream>

using namespace std;

int main()
{
    int apress;
    int temp;
    cin>>temp;

    apress = 5*temp - 400;
    cout<<apress<<endl;
    if(apress < 100)
        cout<<1;
    else if(apress > 100)
        cout<<-1;
    else  
        cout<<1;
        
    return 0;
}