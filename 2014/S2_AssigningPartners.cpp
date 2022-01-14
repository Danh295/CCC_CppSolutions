#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string names[2][30];
    unordered_map<string, string> partners;

    cin>>n;
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < n; j++)
            cin>>names[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        if(names[0][i] != names[1][i])
            partners[names[0][i]] = names[1][i];
    }

    bool good = true;
    for(auto i: partners)
    {
        if(i.first == i.second)
            good = false;
        else if(partners[i.second] != i.first)
            good = false;
        
        if(!good)
            break;
    }

    if(good)
        cout<<"good";
    else
        cout<<"bad";

    return 0;
}