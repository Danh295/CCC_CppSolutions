#include <iostream>
#include <string>

using namespace std;

int countHappy = 0;
int countSad = 0;

string happy_or_sad(string sent)
{
    for(int i = 0; i < sent.size(); i++)
    {
        char curr = sent[i];
        if(curr == ':')
        {
            if(sent[i+1] == '-')
            {
                if(sent[i+2] == '(')
                    countSad += 1;
                else if(sent[i+2] == ')')
                    countHappy += 1;
            }
        }
    }

    if(countSad + countHappy == 0)
        return "none";
    else if(countSad == countHappy)
        return "unsure";
    else if(countSad > countHappy)
        return "sad";
    else
        return "happy"; 
}

int main()
{
    string in;
    getline(cin, in);
    
    string out = happy_or_sad(in);
    cout<<out;

    return 0;
}