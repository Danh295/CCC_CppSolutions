#include <iostream>
#include <string>

using namespace std;

string letrs = "IOSHZXN";

string useOnSign(string sign)
{
    bool inLetrs;
    for(auto &i: sign)
    {
        inLetrs = false;
        for(auto &j: letrs)
        {
            if(i == j)
            {
                inLetrs = true;
                break;
            }
        }
        if(!inLetrs)
            return "NO";
    }
    return "YES";
}

int main()
{
    string sign;
    cin>>sign;

    cout<<useOnSign(sign);

    return 0;
}