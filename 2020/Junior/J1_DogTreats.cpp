#include <iostream>

using namespace std;

int main()
{
    int s;
    int m;
    int l;
    cin>>s;
    cin>>m;
    cin>>l;

    int score = s + 2*m + 3*l;
    if(score >= 10)
        cout<<"happy";
    else
        cout<<"sad";

    return 0;
}