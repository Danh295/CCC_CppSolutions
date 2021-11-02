#include <iostream>
#include <string>

using namespace std;

int main()
{
    int lines;
    cin>>lines;
    for(int i = 0; i < lines; i++)
    {
        int n;
        char s;
        cin>>n;
        cin>>s;
        for(int j = 0; j < n; j++)
        {
            cout<<s;
        }
        cout<<endl;
    }

    return 0;
}