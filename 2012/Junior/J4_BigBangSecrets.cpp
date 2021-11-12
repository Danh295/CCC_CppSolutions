#include <iostream>
#include <string>

using namespace std;

int main()
{
    char alps[26];
    int j = 65;
    for(int i = 0; i < 26; i++)
    {
        alps[i] = j;
        j += 1;
    }

    int k;
    string wrd;
    char outpt[21];
    cin>>k;
    cin>>wrd;

    for(int i = 0; i < wrd.size(); i++)
    {
        int shift = 3*(i+1)+k;
        int chr = int(wrd[i]) - shift;
        if(int(wrd[i]) - shift < 65)
        {
            chr = 91-(65-(int(wrd[i])-shift));
        }
        
        cout<<char(chr);
    }

    return 0;
}