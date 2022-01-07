#include <iostream>
#include <string>

int main()
{
    // INITIALIZATION

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char alps[26];
    int j = 65;

    // set up alphabet char aray
    for(int i = 0; i < 26; i++)
    {
        alps[i] = j;
        j += 1;
    }

    int k;
    std::string wrd;
    char outpt[21];

    // INPUT
    std::cin>>k;
    std::cin>>wrd;

    // PROCESS & ITERATIVE OUTPUT
    for(int i = 0; i < wrd.size(); i++)
    {
        int shift = 3*(i+1)+k;
        int chr = int(wrd[i]) - shift;
        if(int(wrd[i]) - shift < 65)
        {
            chr = 91-(65-(int(wrd[i])-shift));
        }
        
        std::cout<<char(chr);
    }

    return 0;
}