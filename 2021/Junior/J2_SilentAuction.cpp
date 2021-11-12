#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string nm;
    int amt;
    cin>>nm;
    cin>>amt;
    string hNm = nm;
    int hAmt = amt;
    for(int i = 1; i < n; i++)
    {
        cin>>nm;
        cin>>amt;
        if(amt > hAmt)
        {
            hNm = nm;
            hAmt = amt;
        }
    }

    cout<<hNm;

    return 0;
}