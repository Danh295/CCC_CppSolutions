#include <iostream>
#include <string>
#include <vector>

void decode(std::vector<int> &instr)
{
    // init
    int sum;
    std::string curr, prev;

    // loop through all given instructions
    for(int i = 0; i < instr.size(); i++) {
        // init iterative variables
        prev = curr;
        sum = instr[i]/10000%10 + instr[i]/1000%10;

        // conditions check for direction of curr instruction
        if(sum % 2 != 0) {
            std::cout<<"left ";
            curr = "left ";
        } else if(sum != 0) {
            std::cout<<"right ";
            curr = "right ";
        }
        else
            std::cout<<prev;

        // iterative output
        std::cout<<instr[i]/100%10<<instr[i]/10%10<<instr[i]%10<<std::endl;
    }
}

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int inp;
    std::vector<int> instr;

    // init
    std::cin>>inp;
    instr.push_back(inp);

    // iterative input
    while(inp != 99999) {
        std::cin>>inp;
        instr.push_back(inp);
    }
    instr.pop_back();

    // call void function for output
    decode(instr);

    return 0;
}