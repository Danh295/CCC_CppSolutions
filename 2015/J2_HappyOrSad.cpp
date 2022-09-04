#include <iostream>
#include <string>

int countHappy = 0;
int countSad = 0;

std::string happy_or_sad(std::string sent)
{
    for (int i = 0; i < sent.size(); i++) {
        char curr = sent[i];
        
        if (curr == ':') {
            if (sent[i+1] == '-') {
                if (sent[i+2] == '(') countSad += 1;
                else if (sent[i+2] == ')') countHappy += 1;
            }
        }
    }

    if (countSad + countHappy == 0) return "none";
    else if(countSad == countHappy) return "unsure";
    else if(countSad > countHappy) return "sad";
    else return "happy"; 
}

int main()
{
    std::string in;
    std::getline(std::cin, in);
    
    std::string out = happy_or_sad(in);
    std::cout << out;

    return 0;
}