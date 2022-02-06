#include <iostream>

using namespace std;

int main() 
{
    // INITIALIZATION

    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;

    // INPUT
    cin>>n;

    // PROCESS & OUTPUT
    cout<<(3 - abs(5 - n) / 2);

    // Brute force solution (slightly slower):
    // if(n == 1 || n == 9 || n == 10)
    //     cout<<1;
    // else if(n == 2 || n == 3 || n == 7 || n == 8) 
    //     cout<<2;
    // else
    //     cout<<3;

    return 0;
}