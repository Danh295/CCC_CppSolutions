#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string names1[31];
    string names2[31];
    map<string, string> pairs;
    bool good = true;

    cin>>n;
    
    for(int i = 0; i < n; i++)
        cin>>names1[i];
    for(int i = 0; i < n; i++)
        cin>>names2[i];
    
    for(int i = 0; i < n; i++)
        pairs[names1[i]] == names2[i];

    for(int i = 0; i < n; i++)
    {
        if(pairs[names1[i]] == names1[i])
            good = false;
        if(pairs[names1[i]] == names2[i] && pairs[names2[i]] == names1[i])
            continue;
        
        good = false;
    }

    if(good)
        cout<<"good";
    else
        cout<<"bad";

    return 0;
}