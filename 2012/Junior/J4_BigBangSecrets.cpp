#include <iostream>
#include <string>

std::string decode(std::string wrd, int k, char* alphas) 
{
    std::string decoded;
    for(int i = 0; i < wrd.size(); i++)
    {
        int shift = 3*(i+1)+k;
        int chr = int(wrd[i]) - shift;
        if(int(wrd[i]) - shift < 65)
        {
            chr = 91-(65-(int(wrd[i])-shift));
        }
        decoded[i] = char(chr);
    }

    return decoded;
}

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
    std::string wrd;
    char outpt[21];
    std::cin>>k;
    std::cin>>wrd;

    std::string final = decode(wrd, k, alps);
    for(char &i : final)
    {
        std::cout<<i;
    }

    return 0;
}